# Avis de passage

Catégorie : Reverse 
Difficulté : Facile
Conceptrice, rédactrice : Pinpin

## Conception :
Le challenge est un script en C contenant le flag et des messages parasites. 
```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Votre colis n'a pas pu vous être livré à ce jour.\n");
    
    if (getenv ("HOME") == "something unnecessary"){
        printf("NHM2I{SmVuZXN1aXNwY");
        printf("Dominique -nique -nique S'en allait tout simplement Routier, pauvre et chantant");
        printf("XNpbnNwaXLpZQ==}");
    }
}
```

Ainsi qu'un script en bash qui va compresser via UPX le fichier C de sortie. 
```shell
#!/bin/sh

gcc source.c -o livraison -m64 -static
upx --exact livraison
```

On a désormais un éxecutable "livraison".

## Walkthrough : 
![](Pasted%20image%2020230221141144.png)
Lorsqu'on exécute less sur le document, il reste illisible.
On pourrait être tenté de le grep
![](Pasted%20image%2020230221141842.png)
En relisant la description et l'indice "Je ne suis vraiment pas satisfaite des services d'UPX ! " on cherche "UPX"
![](Pasted%20image%2020230221142113.png)
En cherchant sur internet on trouve comment décompresser un fichier UPX `upx -d livraison` le fichier reste toujours illisible mais il est possible désormais de grep le handle du flag :
`cat livraison | grep -a 'NHM2I'`
![](Pasted%20image%2020230223135753.png)
En recollant les morceau le flag est :  <mark class="red mark-border"> NHM2I{SmVuZXN1aXNwYXNpbnNwaXLpZQ==}  </mark>