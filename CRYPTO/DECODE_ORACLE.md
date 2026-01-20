**Enoncé débutant :**

Titre : Chasse à l'Oracle

Description : La Matrice a été compromise ! L'Agent Smith a intercepté un message chiffré et la clé publique utilisée pour le chiffrer. Ce message contient des informations cruciales sur l'emplacement de l'Oracle, une entité capable de prédire l'avenir et d'aider les résistants dans leur lutte contre les machines. Votre mission consiste à déchiffrer le message avant que l'Agent Smith ne puisse le faire. Vous disposez de la clé publique utilisée pour chiffrer le message. Bonne chance !

Objectif : Déchiffrer le message intercepté avant l'Agent Smith.

Note : Le chiffrement utilisé est le chiffrement RSA, une technique de chiffrement asymétrique qui repose sur le choix de deux nombres premiers très grands. La clé publique est calculée à partir de ces deux nombres, et la clé privée est calculée à partir de ces mêmes nombres et d'un exposant de chiffrement. Le message chiffré est calculé à partir de la clé publique et du message en clair à l'aide d'une opération mathématique. Le déchiffrement du message nécessite la connaissance de la clé privée correspondante à la clé publique utilisée pour le chiffrement. La factorisation de nombres très grands est un problème difficile pour les ordinateurs classiques, mais pas pour les ordinateurs quantiques.

Infos :

public_key = (299, 5)

ciphertext = 123

private_key = ?

plaintext = ?

**Enoncé Expérimenté :**

Titre : Chasse à l'Oracle

Description : La Matrice a été compromise ! L'Agent Smith a intercepté un message chiffré et la clé publique utilisée pour le chiffrer. Ce message contient des informations cruciales sur l'emplacement de l'Oracle, une entité capable de prédire l'avenir et d'aider les résistants dans leur lutte contre les machines. Votre mission consiste à déchiffrer le message avant que l'Agent Smith ne puisse le faire. Vous disposez de la clé publique utilisée pour chiffrer le message. Bonne chance !

Objectif : Déchiffrer le message intercepté avant l'Agent Smith.

public_key = (299, 5)

ciphertext = 123

Saviez-vous que le chiffrement RSA doit son nom aux noms de ses inventeurs, Ron Rivest, Adi Shamir et Leonard Adleman ?

Python (decode-oracle.py) :

```python
from math import gcd

# Clé publique (N, e)
public_key = (299, 5)

# Message chiffré
ciphertext = 123

# Factorisation de N
p = 13
q = 23

# Calcul de phi(N)
phi_n = (p-1) * (q-1)

# Calcul de la clé privée d
d = pow(public_key[1], -1, phi_n)

# Vérification que la clé publique est valide
if gcd(public_key[1], phi_n) != 1:
    raise Exception("Clé publique invalide : e n'est pas premier avec phi(N)")

# Déchiffrement du message
plaintext = pow(ciphertext, d, public_key[0])

print("Clé privée : d =", d)
print("Message déchiffré :", plaintext)

# Clé privée : d = 53
# Message déchiffré : 262
```

Et il faudra rentrer le flag NHM2I{262} pour valider le challenge.
