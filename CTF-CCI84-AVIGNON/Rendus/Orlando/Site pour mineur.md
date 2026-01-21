# Challenge Site pour mineur
Auteur | Sujet
:---|:---
Orlando DUCAMP|Site pour mineur

# Description 
Le but de ce challenge est de trouver un moyen de pouvoir entrer dans ce site internet qui est interdit au moins de 18 ans.
Le challenge est disponible sur: http://192.168.201.10:21001/MineurInterdit.html

# Construction
les quatres fonction ont été obfuscé pour éviter que l'on vois ce qu'il se passe dnas notre JS.
```js
overAge = function () {
    $('#age-verify').addClass('hidden');
}

underAge = function () {
    $('#age-verify').addClass('under');
}

function goBack() {
    $("#age-verify").removeClass('under');
}

function OnClickButton() {
    let warning = document.getElementById("warning").textContent.match(/\d{1,}/)
    let age = document.getElementById("age").textContent.match(/\d{1,}/)

    if (warning[0] <= age[0]) {
        alert("Félicitation, voici le flag: NHM2I{4a2435e3-34b7-4626-9278-c8b2e1cdf968}")
    } else {
        alert("Vous ne pouvez pas accéder à ce site")
    }
}
```

# Solution
On vois dans la fonction OnClickButton qu'il y a un test sur une valeur afin de vérifier l'âge.
La solution ets de modifier dans le code HTML à partir de l'inspecteur de texte la valeur de l'âge pour qu'elle soit supérieur à 18.
## Le flag: NHM2I{4a2435e3-34b7-4626-9278-c8b2e1cdf968}
