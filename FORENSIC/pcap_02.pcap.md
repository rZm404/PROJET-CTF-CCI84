Côté serveur :

```bash
┌──(root㉿seb)-[/home/seb]
└─# nc -lnvp 1234 -e /bin/bash
listening on [any] 1234 ...
connect to [127.0.0.1] from (UNKNOWN) [127.0.0.1] 48168
cat: flag.txt: Aucun fichier ou dossier de ce type
```

Côté client :

```bash
┌──(root㉿seb)-[~]
└─# nc 127.0.0.1 1234  
uname -a
Linux seb 6.0.0-kali6-amd64 #1 SMP PREEMPT_DYNAMIC Debian 6.0.12-1kali1 (2022-12-19) x86_64 GNU/Linux












cat flag.txt    
ls
Bureau
BurpSuiteCommunity
Documents
Images
Modèles
Musique
Public
rtl8812au
Téléchargements
Vidéos
cd Téléchargements
cat flag.txt
FLAG{hjdhdh-JDJ8786D-jkfh0-87897-RTbd7}
^X^C
```

\+ ping localhost && ping 127.0.0.1 pour brouiller les piste en inondant le réseau mais pas trop.

Solve :

Clique droit, suivre le flux TCP => on a le flag 

L'objectif est de montrer que uen connexion telnet n'est pas sécurisé.

![bef4fa25ab8e22a0a990cfaf91b0b902.png](../../_resources/bef4fa25ab8e22a0a990cfaf91b0b902.png)