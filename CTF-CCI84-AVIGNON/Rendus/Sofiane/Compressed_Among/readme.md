# Compressed_Among ?

:warning: Ce write-up est destinée uniquement au participant à l'événement "La nuit du Hack" et ne dois faire l'objet d'aucune autre diffusion :exclamation:


| Apprentis     | Catégorie       | Niveau                                                                         |
| :-------------- | :----------- | :------------------------------------------------------------------------------ |
| Sofiane Zekri | Stéganographie | Facile |

## Énoncé

Ce personnage est suspect, il semble porter un costume.

Pouvez-vous chercher ce qu'il cache ?

## Flag
NHM2I{8cb3ba30-b18f-4e59-a025-d024d38b4b1a}
## Aide


* Tout d'abord, ouvrez l'image fournie avec un logiciel d'édition d'images. Vous pouvez utiliser des logiciels gratuits tels que GIMP ou Paint.NET.

* Examinez attentivement l'image pour trouver des détails inhabituels, tels que des pixels de couleurs différentes, des zones floues ou des motifs étranges. Souvent, les fichiers cachés dans une image sont insérés dans des pixels individuels ou dans des parties spécifiques de l'image.

* Utiliser un outil de stéganographie
Il existe plusieurs outils de stéganographie disponibles en ligne, tels que Steghide, OpenStego, ou encore Stegano. Essayez d'utiliser un outil pour extraire les données cachées de l'image. 
Ici l'image contient un fichier ZIP, vous pouvez essayer d'utiliser des outils pour extraire les données ZIP de l'image.

* Si l'outil de stéganographie a réussi à extraire le fichier ZIP de l'image, ouvrez le fichier pour voir ce qu'il contient. Si le fichier ZIP est protégé par un mot de passe, essayez de deviner le mot de passe ou utilisez un outil de craquage de mot de passe tel que John the Ripper


## Résolution 
```bash
[User@Linux Facile]$ zip2john Compressed_Among.jpg >> hashes.txt
[User@Linux Facile]$ john hashes.txt
> azerty+1         (index.jpg/secret.txt)
[User@Linux Facile]$ unzip -P azerty+1 secret.zip
```
***Le fichier texte contenu dans le ZIP contiens le flag***

## Mise en place:
```bash
#Take Picture
#Find Password
zip --password $password $file_txt
cat $file_txt_zip >> $picture
```