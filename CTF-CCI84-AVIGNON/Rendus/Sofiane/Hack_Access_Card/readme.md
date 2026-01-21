 # Hack Access Card

:warning: Ce write-up est destinée uniquement au participant à l'événement "La nuit du Hack" et ne dois faire l'objet d'aucune autre diffusion :exclamation:


| Apprentis     | Catégorie       | Niveau                                                                         |
| :-------------- | :----------- | :------------------------------------------------------------------------------ |
| Sofiane Zekri | Crypto/Pwn | Facile |

## Énoncé

Nous avons retrouvé la carte d'acces de l'imposteur:

![Access Card](./AccessCard.png)

Malheureusement, il est impossible de décrypter sans la clé.

Mais nous avons une piste ici:

FindKey.py

**Pour la verification :**

nc 192.168.201.37 2004

## Flag
NHM2I{7fba65ac-a512-424c-84de-40623061d017}

## Résolution

### Analyse du code

Lorsque le programme est exécuté, il demande à l'utilisateur de fournir des entrées pour les variables a, m, o, n, g et u,s. Les entrées sont vérifiées pour s'assurer qu'elles sont valides, puis le programme effectue plusieurs vérifications pour s'assurer que les valeurs fournies répondent à certaines conditions.

Si toutes les conditions sont satisfaites, le programme imprime le message "Le masque correspond au variable a,m,o,n,g,u,s en ascci". Dans ce cas, les variables fournies forment la clé pour obtenir la clé du chiffrement vigenere de FAA2Z{7fhe65sv-o512-424t-84dk-40623061h017}.

### Analyse des conditions

Le code exige que les variables fournies répondent à plusieurs conditions pour obtenir le flag. Voici une analyse des conditions:

* a*4+m*6+o*8+n*2+g+u*8+s*2 == 3395: Cette condition vérifie que la somme de la valeur de chaque variable multipliée par un certain nombre est égale à 3395.
* a*4+m*6+o*8+n*2+g == 2369: Cette condition vérifie que la somme de la valeur de chaque variable multipliée par un certain nombre est égale à 2369.
* a > 100 and a < 120: Cette condition vérifie que la variable a est comprise entre 100 et 120.
* "16" in str(m): Cette condition vérifie si le nombre 16 est présent dans la variable m.
* str(o).count("1") == 3: Cette condition vérifie si la variable o contient exactement trois chiffres 1.
* int(str(n)[0])+int(str(n)[1])+2 == int(str(n)[2]): Cette condition vérifie si la somme des deux premiers chiffres de la variable n plus deux est égale au troisième chiffre.
* len(str(g))==2 and "7" in str(g) and "9" in str(g): Cette condition vérifie si la variable g contient exactement deux chiffres et s'ils contiennent tous les deux les chiffres 7 et 9.
* u > 100 and u < 105: Cette condition vérifie que la variable u est comprise entre 100 et 105.
* s+99==200: Cette condition vérifie que la somme de la variable s et 99 est égale à 200.

### Résolution du challenge

Pour résoudre le challenge, il suffit de trouver les valeurs de a, m, o, n, g, u, et s qui répondent à toutes les conditions.
Soit :
A = 115
M = 116
O = 111
N = 114
G = 97
U = 103
S = 101

## Mise en place 
```bash
cd /home/students/CTF/Sofiane/XXX
# sudo docker build -t $Name .
# sudo docker run -p 13003 $Name
sudo start $dockername
```
[Code source](open_door.py)
