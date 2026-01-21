# Challenge Ez XOR 
Auteur | Sujet
:---|:---
Orlando DUCAMP|Ez-XOR

## Description
Nous avons reçu un message chiffré, à l'intérieur de ce message le flag est présent à vous de trouvez une solution pour le déchiffrer afin d'optenir le flag. 
Pour chiffrer ce message nous avon utilisé cette fonction : 
```py
def encryptMsg(plaintext):
    ciphertext = b""
    for i in plaintext:
        ciphertext += chr(ord(i) ^ ord('A')).encode()
    return ciphertext
```

## Solution
Pour résoudre ce challenge il existe plusieur manière de déchiffré le Flag à l'intérieur de ce message. Voici les solutions :
```py
def decryptMsg(ciphertext):
    plaintext = ""
    for i in ciphertext:
        plaintext += chr(i ^ ord('A'))
    return plaintext
```
 Une dexuième solutions  :
```py
import string

for i in string.ascii_letters:
    dec_flag = "".join( [ chr(x ^ ord(i)) for x in flag])
    print( dec_flag )
```

## Le flag: NHM2I{18819e55-ec5a-4105-a8b8-450e83d4f3b8}
