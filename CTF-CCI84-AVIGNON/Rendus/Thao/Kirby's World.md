# Kirby's World

Catégorie : WEB 
Difficulté : Facile
Conceptrice, rédactrice : Pinpin

## Conception : 
Pour ce challenge, je me suis inspiré du challenge "nothinginthebox" trouvé sur internet. J'ai alors récupéré le site web en changeant le contenu. 
Dans le fichier index.html j'ai ajouter des commentaires afin de noyer le poisson.
Le flag est disponible dans /home/students/CTF/Thao/webfacile/article.txt
`NHM2I{Masahiro-Sakurai}`


Il faut maintenant mettre le dossier de la page web sur le serveur CTFd. 
```shell
scp pinpin@192.168.201.39:/home/pinpin/Documents/Semestre_3/Projet_CTF/webfacile.tar .
```

Extraire l'archive tar 
```shell
tar -xf webfacile.tar
```

Crée un volume et run le docker sur le port choisi 
``` shell
sudo docker run --name Kirby -v /home/students/CTF/Thao/webfacile:/usr/share/nginx/html -d -p 22001:80 nginx
```
```
students@openvpn:~/CTF/Thao$ sudo docker ps
CONTAINER ID   IMAGE                        COMMAND                  CREATED         STATUS         PORTS                                                NAMES
ff16e30c900d   nginx                        "/docker-entrypoint.…"   3 seconds ago   Up 2 seconds   0.0.0.0:22001->80/tcp, :::22001->80/tcp              Kirby
```

On peut désormais accéder à cette page à l'adresse suivante : 192.168.201.10:22001
![](Pasted%20image%2020230224142651.png)

Si besoin de relancer le docker : 
```shell
sudo docker stop Kirby
sudo docker rm Kirby
sudo docker ps
// et relancer la commande run 
```

## Walkthrough

```
dirb http://192.168.201.10:22001/ -r
```

On trouve rien, mais on peut aller voir dans "robots.txt" on y trouve l'information "More information in article.txt"

En y accédant on y trouve le flag à la fin http://192.168.201.10:22001/article.txt