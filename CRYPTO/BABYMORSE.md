**Pour les débutants :**

Lors d'une communication entre Morpheus et Agent Smith, une interférence bizarre a été remarquée. Trinity a besoin de ton aide pour déchiffrer cette interférence en Morse code. Utilise le dictionnaire Morse pour aider Trinity à trouver le message secret.

```python
morse_dict = {

'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.', 'G': '--.', 'H': '....', 'I': '..', 'J': '.---', 'K': '-.-', 'L': '.-..', 'M': '--', 'N': '-.', 'O': '---', 'P': '.--.', 'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-', 'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-', 'Y': '-.--', 'Z': '--..',

'0': '-----', '1': '.----', '2': '..---', '3': '...--', '4': '....-', '5': '.....', '6': '-....', '7': '--...', '8': '---..', '9': '----.',

' ': '/', ',': '--..--', '.': '.-.-.-', '?': '..--..', "'": '.----.', '/': '-..-.', '(': '-.--.', ')': '-.--.-', '&': '.-...', ':': '---...', ';': '-.-.-.', '=': '-...-', '+': '.-.-.', '-': '-....-', '_': '..--.-', '"': '.-..-.', '$': '...-..-', '!': '-.-.--', '@': '.--.-.', 'À': '.--.-', 'É': '..-..', 'È': '.-..-', 'Ê': '.-..-', 'Ç': '-.-..', '{': '.--.-.', '}': '.--.-.'

}
```

**Pour les expérimentés :**

Une communication interceptée entre Morpheus et Agent Smith a été altérée avec une interférence chiffrée. Peux-tu aider Trinity à déchiffrer le message secret ? Utilise ton expérience en décodage pour surmonter les défis et trouver la réponse cachée.

Python (morse.py) :

```python
morse_dict = {
    'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.', 'G': '--.', 'H': '....', 'I': '..', 'J': '.---', 'K': '-.-', 'L': '.-..', 'M': '--', 'N': '-.', 'O': '---', 'P': '.--.', 'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-', 'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-', 'Y': '-.--', 'Z': '--..', 
    '0': '-----', '1': '.----', '2': '..---', '3': '...--', '4': '....-', '5': '.....', '6': '-....', '7': '--...', '8': '---..', '9': '----.', 
    ' ': '/', ',': '--..--', '.': '.-.-.-', '?': '..--..', "'": '.----.', '/': '-..-.', '(': '-.--.', ')': '-.--.-', '&': '.-...', ':': '---...', ';': '-.-.-.', '=': '-...-', '+': '.-.-.', '-': '-....-', '_': '..--.-', '"': '.-..-.', '$': '...-..-', '!': '-.-.--', '@': '.--.-.', 'À': '.--.-', 'É': '..-..', 'È': '.-..-', 'Ê': '.-..-', 'Ç': '-.-..', '{': '.--.-.', '}': '.--.-.'
}

def morse_encode(message):
    morse_code = ""
    for char in message:
        if char.upper() in morse_dict:
            morse_code += morse_dict[char.upper()] + " "
        else:
            print(f"Cannot encode '{char}' in Morse code")
            morse_code += " "
    return morse_code

def morse_decode(morse_code):
    message = ""
    morse_code += " "
    i, char = 0, ""
    while i < len(morse_code):
        if morse_code[i] != " ":
            char += morse_code[i]
            i += 1
        else:
            if char in morse_dict.values():
                message += list(morse_dict.keys())[list(morse_dict.values()).index(char)]
            elif char == "/":
                message += " "
            else:
                print(f"Cannot decode '{char}' from Morse code")
            char = ""
            i += 1
    return message


# Conversation
agent_smith_message = "Agent Smith : N'envoyez jamais un humain faire le travail d'un programme."
morpheus_message = "Morpheus : On n'est pas le meilleur quand on le croit mais quand on le sait."
interference = "interférence : BzzzzzzzzzzzzzbzzzzzzzNHM2I{T3CL1DFW-N0NN-G6AD-TMLO9F8O}bzzzzzzzbBzzzzzzzzbBzzzz"
agent_smith_message2 = "Agent Smith : Dites-moi, M. Morpheus, à quoi bon téléphoner si vous êtes dans l'incapacité de parler ?"

# encode and decode Agent Smith's messages
encoded_message = morse_encode(agent_smith_message)
print(f"{encoded_message}")
#decoded_message = morse_decode(encoded_message)
#print(f"Agent Smith (decoded): {decoded_message}")

encoded_message = morse_encode(agent_smith_message2)
print(f"{encoded_message}")
#decoded_message = morse_decode(encoded_message)
#print(f"Agent Smith (decoded): {decoded_message}")

# encode and decode interference's message
encoded_message = morse_encode(interference)
print(f"{encoded_message}")
#decoded_message = morse_decode(encoded_message)
#print(f"interférence: {decoded_message}")

# encode and decode Morpheus' message
encoded_message = morse_encode(morpheus_message)
print(f"{encoded_message}")
#decoded_message = morse_decode(encoded_message)
#print(f"Morpheus (decoded): {decoded_message}")
```

Le code morse à déchiffrer :

```morse
.- --. . -. - / ... -- .. - .... / ---... / -. .----. . -. ...- --- -.-- . --.. / .--- .- -- .- .. ... / ..- -. / .... ..- -- .- .. -. / ..-. .- .. .-. . / .-.. . / - .-. .- ...- .- .. .-.. / -.. .----. ..- -. / .--. .-. --- --. .-. .- -- -- . .-.-.- 
.- --. . -. - / ... -- .. - .... / ---... / -.. .. - . ... -....- -- --- .. --..-- / -- .-.-.- / -- --- .-. .--. .... . ..- ... --..-- / .--.- / --.- ..- --- .. / -... --- -. / - ..-.. .-.. ..-.. .--. .... --- -. . .-. / ... .. / ...- --- ..- ... / .-..- - . ... / -.. .- -. ... / .-.. .----. .. -. -.-. .- .--. .- -.-. .. - ..-.. / -.. . / .--. .- .-. .-.. . .-. / ..--.. 
.. -. - . .-. ..-. ..-.. .-. . -. -.-. . / ---... / -... --.. --.. --.. --.. --.. --.. --.. --.. --.. --.. --.. --.. --.. -... --.. --.. --.. --.. --.. --.. --.. -. .... -- ..--- .. .--.-. - ...-- -.-. .-.. .---- -.. ..-. .-- -....- -. ----- -. -. -....- --. -.... .- -.. -....- - -- .-.. --- ----. ..-. ---.. --- .--.-. -... --.. --.. --.. --.. --.. --.. --.. -... -... --.. --.. --.. --.. --.. --.. --.. --.. -... -... --.. --.. --.. --.. 
-- --- .-. .--. .... . ..- ... / ---... / --- -. / -. .----. . ... - / .--. .- ... / .-.. . / -- . .. .-.. .-.. . ..- .-. / --.- ..- .- -. -.. / --- -. / .-.. . / -.-. .-. --- .. - / -- .- .. ... / --.- ..- .- -. -.. / --- -. / .-.. . / ... .- .. - .-.-.- 
```

La solve :

```bash
┌──(seb㉿seb)-[~/Téléchargements]
└─$ /bin/python3.11 /home/seb/Téléchargements/morse.py
.- --. . -. - / ... -- .. - .... / ---... / -. .----. . -. ...- --- -.-- . --.. / .--- .- -- .- .. ... / ..- -. / .... ..- -- .- .. -. / ..-. .- .. .-. . / .-.. . / - .-. .- ...- .- .. .-.. / -.. .----. ..- -. / .--. .-. --- --. .-. .- -- -- . .-.-.- 
Cannot decode '' from Morse code
Agent Smith (decoded): AGENT SMITH : N'ENVOYEZ JAMAIS UN HUMAIN FAIRE LE TRAVAIL D'UN PROGRAMME.
.- --. . -. - / ... -- .. - .... / ---... / -.. .. - . ... -....- -- --- .. --..-- / -- .-.-.- / -- --- .-. .--. .... . ..- ... --..-- / .--.- / --.- ..- --- .. / -... --- -. / - ..-.. .-.. ..-.. .--. .... --- -. . .-. / ... .. / ...- --- ..- ... / .-..- - . ... / -.. .- -. ... / .-.. .----. .. -. -.-. .- .--. .- -.-. .. - ..-.. / -.. . / .--. .- .-. .-.. . .-. / ..--.. 
Cannot decode '' from Morse code
Agent Smith (decoded): AGENT SMITH : DITES-MOI, M. MORPHEUS, À QUOI BON TÉLÉPHONER SI VOUS ÈTES DANS L'INCAPACITÉ DE PARLER ?
.. -. - . .-. ..-. ..-.. .-. . -. -.-. . / ---... / -... --.. --.. --.. --.. --.. --.. --.. --.. --.. --.. --.. --.. --.. -... --.. --.. --.. --.. --.. --.. --.. ..-. .-.. .- --. .--.-. -..- -..- -..- -..- -....- -..- -..- -..- -..- -....- -..- -..- -..- -..- .--.-. -... --.. --.. --.. --.. --.. --.. --.. -... -... --.. --.. --.. --.. --.. --.. --.. --.. -... -... --.. --.. --.. --.. 
Cannot decode '' from Morse code
interférence: INTERFÉRENCE : BZZZZZZZZZZZZZBZZZZZZZNHM2I{T3CL1DFW-N0NN-G6AD-TMLO9F8O}@BZZZZZZZBBZZZZZZZZBBZZZZ
-- --- .-. .--. .... . ..- ... / ---... / --- -. / -. .----. . ... - / .--. .- ... / .-.. . / -- . .. .-.. .-.. . ..- .-. / --.- ..- .- -. -.. / --- -. / .-.. . / -.-. .-. --- .. - / -- .- .. ... / --.- ..- .- -. -.. / --- -. / .-.. . / ... .- .. - .-.-.- 
Cannot decode '' from Morse code
Morpheus (decoded): MORPHEUS : ON N'EST PAS LE MEILLEUR QUAND ON LE CROIT MAIS QUAND ON LE SAIT.
```
