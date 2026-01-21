
En cas de crash du serveur :

Se rendre sur le proxmox secondaire, c'est à dire celui qui n'a pas crash :

- **192.168.201.11:8006**
user:root
passwd:OneX#5000
- **192.168.201.12:8006**
user:root
passwd:TwoX#6000

Si les vm secondaires sont down, les redémarrer une à une :

![](restart%20vm.png)

Si elles sont déjà toute activée simplement s'assurer que le load balancing s'est bien effectué et que le ctf est toujours joignable après le crash. 

⚠ Si lors du redémarrage des vm cette erreur apparait : 

![](error%20restart%20vm%20one%20node.png)

Se connecter en ssh sur le proxmox en question est éxécuter cette commande : 

```bash
pvecm expected 1
```

Se connecter au serveur en SSH puis  éxécuter cette commande : 

```bash
sudo docker ps -a | cut -d " " -f 1 > /tmp/containers.txt;for container in $(cat /tmp/containers.txt);do sudo docker start ${container};done;rm -f /tmp/containers.txt;ncat -lk -p 11001 -e "/usr/bin/python3 /home/ang3l/Documents/GitHub/CTF/Romain/input_print/to_server/run.py" & ncat -lk -p 14002 -e "/usr/bin/python3 /home/students/CTF/Antoine/misc/WelcomeToCasino.py" &
```

⚠ si jamais le docker Ctfd/Ctfd ne redémarre plus à cause d'une erreur pickle ou autre essayer de vider le cache du docker : 

```bash
rm -rf /var/lib/docker/overlay2/cd356eeff88b505f36b6bf78538031e224a738fc1d622c5a8d6d0be59044fe55/merged/opt/CTFd/.data
```

