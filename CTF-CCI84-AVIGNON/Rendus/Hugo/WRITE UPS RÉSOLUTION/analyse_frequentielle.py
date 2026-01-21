import string

# Fréquence moyenne d'apparition des lettres en français (source : Wikipédia)
frequencesLettresFR = {
    'a': 8.11, 'b': 0.81, 'c': 3.38, 'd': 4.18, 'e': 17.26, 'f': 1.12,
    'g': 1.27, 'h': 0.92, 'i': 7.34, 'j': 0.31, 'k': 0.05, 'l': 6.01,
    'm': 2.96, 'n': 7.13, 'o': 5.26, 'p': 3.01, 'q': 0.99, 'r': 6.55,
    's': 8.02, 't': 7.07, 'u': 5.74, 'v': 1.32, 'w': 0.04, 'x': 0.45,
    'y': 0.30, 'z': 0.15
}

def dechiffrement(ciphertext):

    # Converti le texte chiffré en minuscules, là est le piège, il ne faut pas inclure la partie flag à la fin.
    ciphertext = ciphertext.lower()

    # Compte le nombre d'apparitions de chaque lettre dans le texte chiffré
    freqs = {}
    for c in ciphertext:
        if c in string.ascii_lowercase:
            if c in freqs:
                freqs[c] += 1
            else:
                freqs[c] = 1

    # Calcule la fréquence d'apparition de chaque lettre dans le texte chiffré.
    total = sum(freqs.values())
    for c in freqs:
        freqs[c] = (freqs[c] / total) * 100

    # Trie les lettres du plus fréquent au moins fréquent
    sorted_freqs = sorted(freqs.items(), key=lambda x: x[1], reverse=True)

    # Compare les fréquences de chaque lettre du texte chiffré avec les fréquences moyennes.
    # des lettres en français pour deviner la lettre correspondante.
    key = {}
    for i in range(len(sorted_freqs)):
        c = sorted_freqs[i][0]
        f = sorted_freqs[i][1]
        cf = list(frequencesLettresFR.items())[i][0]
        key[c] = cf

    # Déchiffre le texte en utilisant la clé.
    plaintext = ''
    for c in ciphertext:
        if c in key:
            plaintext += key[c]
        else:
            plaintext += c

    return(plaintext)


def main():

    texteChiffre = 'Ab mrynwinmpwzjn nij vnfnkpn pk nkenp obenpw cgpw ani nkjwncwzini nj ani sgpfnwknonkji vp ogkvn nkjznw. Ani mrynwbjjblpni igkj vn capi nk capi igcdzijzlpnni nj ani mrynwmwzozknai pjzazinkj vni jnmdkzlpni vn capi nk capi bfbkmnni cgpw mgocwgonjjwn ani irijnoni zkhgwobjzlpni. Za nij vgkm mwpmzba vn cwnkvwn vni onipwni vn inmpwzjn bvnlpbjni cgpw cwgjnsnw ani vgkknni inkizyani nj ani zkhgwobjzgki mgkhzvnkjznaani.'
    plaintext = dechiffrement(texteChiffre)
    print(plaintext)

if __name__ == '__main__':
    main()