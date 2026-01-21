# Challenge
## Titre : RSAcrypted
## Description
Un message a été chiffré, pouvez vous le déchiffrer ? Sachant qu'on connait le code avec lequel le chiffrement a été éffectué, vous ne devriez pas avoir de mal à le déchiffrer !
## Code utilisé pour le chiffrement
```py
#/usr/bin/python3
from argparse import ArgumentParser
from sympy import mod_inverse, prime

def get_keys():
    p, q = prime(50), prime(60)
    n = p *q 
    phi = (p-1)*(q-1)
    e = 47

    return e, n, phi

def encrypt_msg(msg):
    e, n, _ = get_keys()
    enc_msg = [(ord(i) ** e) % n for i in msg]

    return enc_msg

def main(args):
    
    if args.mod == "enc":
        print(encrypt_msg(args.text))
        
    elif args.mod == "dec":
        pass
    else:
        print("unkown mode...")

if __name__ == "__main__":

    parser = ArgumentParser()
    parser.add_argument("-t","--text", dest="text", type=str)
    parser.add_argument("-m", "--mode", dest="mod", required=True)

    args = parser.parse_args()
    
    main(args)
```
### Voici le message qui a été chiffré :
```py
[45104, 43443, 9797, 51415, 8674, 31008, 40005, 5129, 51517, 7692, 14178, 62048, 7692, 40477, 51517, 62048, 31813, 7692, 63202, 9075, 7692, 36797, 40005, 40477, 51517, 20429, 63230]
```

## Résolution
On créer une fonction de déchiffrement :
```py
def decrypt_msg(enc_msg):
    dec_msg = []
    dec_msgFinal = ""
    e, n, phi = get_keys()
    d = mod_inverse(e, phi)
    for i in enc_msg:
        dec_msg.append(pow(i, d, n))
    for i in dec_msg:
        dec_msgFinal += chr(i)
    #print(dec_msgFinal)
    
    return dec_msgFinal
```
Code complet :
```py
#/usr/bin/python3
from argparse import ArgumentParser
from sympy import mod_inverse, prime

def get_keys():
    p, q = prime(50), prime(60)
    n = p *q 
    phi = (p-1)*(q-1)
    e = 47

    return e, n, phi

def encrypt_msg(msg):
    e, n, _ = get_keys()
    enc_msg = [(ord(i) ** e) % n for i in msg]

    return enc_msg


def decrypt_msg(enc_msg):
    dec_msg = []
    dec_msgFinal = ""
    e, n, phi = get_keys()
    d = mod_inverse(e, phi)
    for i in enc_msg:
        dec_msg.append(pow(i, d, n))
    for i in dec_msg:
        dec_msgFinal += chr(i)
    #print(dec_msgFinal)
    
    return dec_msgFinal

def main(args):
    
    if args.mod == "enc":
        print(encrypt_msg(args.text))
        
    elif args.mod == "dec":
        print(decrypt_msg([45104, 43443, 9797, 51415, 8674, 31008, 40005, 5129, 51517, 7692, 14178, 62048, 7692, 40477, 51517, 62048, 31813, 7692, 63202, 9075, 7692, 36797, 40005, 40477, 51517, 20429, 63230]))
    else:
        print("unkown mode...")


# pour déchiffrer le message donné:
if __name__ == "__main__":

    parser = ArgumentParser()
    parser.add_argument("-t","--text", dest="text", type=str)
    parser.add_argument("-m", "--mode", dest="mod", required=True)

    args = parser.parse_args()
    
    main(args)
```
Et on lance le script :
```sh
python3 script2.py -m dec
```
Résultat :
```sh
NHM2I{RS4_15_345Y_T0_BR34K}
```
