# Ooo
Catégorie : Cryptographie 
Difficulté : Facile
Conceptrice, rédactrice : Pinpin

## Conception : 
Le message de départ :
`Le joueur dirige un carré en tournant vers la gauche ou la droite jusqu'à atteindre un autre carré. Lorsqu'il atteint ce nouveau carré, le carré initial grandi. Quel est le nom de ce jeu ?La réponse est attendue en alphabet classique. `

Vigenère avec clef  'jeu' : 
```
Ui dxyydv xrvcpi ow guavé yw xidvhjrn eilb pu peolly xy fj hlxmnn nobuo'à jxnnmhmvy dr udxln guavé. Fxvmzy'cu encicwx wn ridzyjy wjvlé, ui wjvlé rrccmuu kljrxr. Uonp ybx fn riv hy li dny ?
Fj véjxrmn imc encihmyy nr uutbjfyc gfjwmruon.
```

Transformé en base85 : 
```
<G<RdG^4RFFs)$MG%5K*+E)HHB6@X+kob7q+F%U2G%bW2DBNM)CgnN+FWbX7Des68+F&/SAniH%Cj9f7DBNh8@WcT:i#lcZDJj<)D0C1IA9&f8A9_p.+D5h*G3LV%7X0)nH?glJFWb75@qfFsGT_3J+ED1,H?j7N+EqRDD!<JnF_MtBC3FFX+EDL4@r6@2+DYe.Ed2UW+B<>tE$0F8GT^U9+ED1>+D?$CChY#&DL!?h$:\bQG3NadEc#\:Bl.?&ASu!lBPi$?+Du3BF`he8C1_a$+D5;$GAVACDf.0
```

## Walkthrough : 
Utiliser l'outil d'identification de chiffrement de Dcode. On retrouve bien le codage ASCII85 en première place. Il suffit de traduire en ASCII85. Mais on ne trouve pas de suite le message. En ré-applicant la méthode on trouve un vigenère. 
Il faut alors faire une analyse fréquentielle afin de déterminer la clef. La longueur de la clef est de 3, comme le nombre de caractères dans le nom du challenge. 
Flag : NHM2I{Snake}