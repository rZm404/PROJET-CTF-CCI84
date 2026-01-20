print("Bienvenue à bord du vaisseau spatial \"Nebuchadnezzar\"! \nVous êtes le nouveau membre de l'équipage et votre mission est de deviner l'âge du capitaine pour remporter votre place pour la prochaine expédition. \nVous avez 100 unités d'argent virtuel pour deviner l'âge du capitaine. \nÀ chaque fois que vous faites une erreur, vous perdrez 34 unités d'argent virtuel. Si vous épuisez tout votre argent virtuel, le jeu sera terminé. \nBonne chance!\n\n")
#
import random

# définissez le montant d'argent virtuel que vous avez
argent_virtuel = 100

# générez un âge aléatoire pour le capitaine entre 2 et 100 ans
age_capitaine = random.randint(1, 101)

# définissez un compteur pour le nombre d'itérations
compteur = 0

# tant que l'âge du capitaine n'est pas deviné correctement, demandez à l'utilisateur de deviner à nouveau
while True:
  devine = int(input("Devinez l'âge du capitaine : "))
  if devine == age_capitaine:
    argent_virtuel += 100
    print("Bravo, vous avez deviné correctement ! Vous gagnez 100 unités d'argent virtuel.")
    print("NHM2I{H27OJGQ9-GVKV-O1MK-M4S8HQCG}")
    break
  else:
    # retirez 33 unité d'argent virtuel à chaque itération où l'âge n'est pas deviné correctement
    argent_virtuel -= 34
    compteur += 1
    if argent_virtuel <= 0:
      print("Vous avez épuisé tout votre argent virtuel. Le jeu est terminé.")
      break
    # ajoutez une indication de "c'est plus" ou "c'est moins"
    if devine < age_capitaine:
      print("[+] C'est plus !")
    else:
      print("[-] C'est moins ! ")
    print("Votre solde d'argent virtuel est maintenant de", argent_virtuel, "unités.")

# affichez le montant d'argent virtuel final de l'utilisateur et le nombre d'itérations
print("Votre solde d'argent virtuel est maintenant de", argent_virtuel, "unités.")
print("Vous avez effectué", compteur, "itérations.") 
