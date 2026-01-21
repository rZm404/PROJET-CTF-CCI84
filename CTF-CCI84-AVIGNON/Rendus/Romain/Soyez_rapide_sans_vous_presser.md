Ce challenge est un texte à déchiffrer, à partir de ça on reconstruit l'alphabet avec les bonnes lettres
et on renvoi les lettres dans le bon ordre à chaque input.
Il y a aussi un timer, donc le scripter devient obligatoire..
```py
import subprocess

script_path = "run.py"
process = subprocess.Popen(["python3", script_path], stdin=subprocess.PIPE, stdout=subprocess.PIPE)
changement_alphabet_inverse = {   
    "I": "A",
    "Q": "B",
    "O": "C",
    "E": "D",
    "V": "E",
    "T": "F",
    "P": "G",
    "L": "H",
    "F": "I",
    "M": "J",
    "X": "K",
    "U": "L",
    "Z": "M",
    "G": "N",
    "W": "O",
    "D": "P",
    "A": "Q",
    "C": "R",
    "R": "S",
    "Y": "T",
    "B": "U",
    "S": "V",
    "N": "W",
    "K": "X",
    "H": "Y",
    "J": "Z",
    ":": ":",
    ".": ".",
    "/": "/",
    "-": "-",
    " ": " ",
    ",": ",",
    "'": "'",
}

def decrypt_word(ciphertext):
    plaintext = ""
    for i in ciphertext:
        plaintext += changement_alphabet_inverse[i]
    return plaintext

while True:
    output_lines = []
    while process.poll() is None:
        output = process.stdout.readline().decode().strip()
        if "NHM2I{" in output:
            print(output)
            break
        else:
            # Retrieve the last line of the output
            output_lines.append(output)
            if "Tentative" in output:
                # Decrypt the last line and send it to the process
                encrypted_word = output_lines[-2].strip().split()[-1]
                decrypted_word = decrypt_word(encrypted_word)
                print(decrypted_word)
                process.stdin.write((decrypted_word + "\n").encode())
                process.stdin.flush()

```
# Flag :
`NHM2I{mon_41ph4b3t_est_l3_t13n}`
