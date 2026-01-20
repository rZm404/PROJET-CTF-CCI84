/*
Dans ce défi, vous devez aider Neo à contourner un bug dans la Matrice. Le code de la Matrice a été altéré, ce qui rend le système de sécurité vulnérable. Votre objectif est de trouver un moyen d'exploiter ce bug pour atteindre votre objectif.

Neo a découvert que s'il arrive à passer une certaine condition, il aura accès à une information très importante. Il a donc besoin de votre aide pour contourner cette sécurité.

La Matrice utilise une méthode de comparaison pour vérifier si deux valeurs sont identiques. Neo a découvert que s'il réussit à modifier ces valeurs avant la comparaison, il pourrait obtenir l'information qu'il recherche.

Votre mission est de modifier les valeurs de comparaison avant qu'elles ne soient comparées par la Matrice. Si vous y parvenez, vous aurez accès à l'information et vous pourrez la transmettre à Neo.

Vous pouvez utiliser le code fourni pour comprendre comment la comparaison est effectuée et trouver un moyen de modifier les valeurs avant la comparaison. Vous pouvez également chercher des indices dans le code pour vous aider à résoudre le défi.

Bon courage, vous êtes la dernière chance de Neo pour sauver l'humanité !
*/
#include <stdio.h>
#include <string.h>

// Sous-routine qui affiche le message "flag"
void show_flag() {
    printf("flag{Gl1rch_th3_M4trix_M4lw4r3}\n");
}

int main(int argc, char** argv) {
    // Valeurs de comparaison
    int value1 = 0xC1;
    int value2 = 0xC1;

    // Si les valeurs sont différentes et value1 est supérieure à value2,
    // on affiche le message "flag"
    if (value1 != value2 && value1 > value2) {
        show_flag();
    } else {
        printf("Sorry, try again\n");
    }

    return 0;
}

/*
Le joueur peut utiliser des outils de désassemblage et d'analyse de code pour identifier 
l'adresse mémoire de la fonction "show_flag()" et remplacer la comparaison par un NOP, déclenchant ainsi l'affichage du message "flag" 
sans même vérifier la condition.
*/
