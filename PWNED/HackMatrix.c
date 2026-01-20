/*
┌──(root㉿kali)
└─# sudo apt-get install libssl-dev

┌──(root㉿kali)
└─# ./MatrixCodeBreakerMedium.exe e                                            
Mauvaise entrée !
Somme des chiffres de 10 : 1
10 / 5 = 2
flag : 0
                                                                                                                                                                                                  
┌──(root㉿kali)
└─# ./MatrixCodeBreakerMedium.exe e03326d6093736bb2946b47fb804e4b8
Flag : MATRIX763C{e03326d6_093736bb_2946b47f_b804e4b8}
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Fonction inutile qui calcule la somme des chiffres d'un entier
int sum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

// Fonction inutile qui divise deux nombres
int divide(int a, int b) {
    return a / b;
}

int main(int argc, char **argv) {
    if (argc <= 1) {
        printf("Usage: %s input\n", argv[0]);
        return 1;
    }

    // Définir les 4 sous-variables
    char *flag_part1 = "e03326d6";
    char *flag_part2 = "093736bb";
    char *flag_part3 = "2946b47f";
    char *flag_part4 = "b804e4b8";

    // Assembler les sous-variables pour former la variable X
    char *x = malloc(33 * sizeof(char));
    strcpy(x, flag_part1);
    strcat(x, flag_part2);
    strcat(x, flag_part3);
    strcat(x, flag_part4);

    // Comparer l'entrée utilisateur avec la variable X
    if (strcmp(argv[1], x) == 0) {
        // Afficher le flag si l'entrée est correcte
        printf("Flag : MATRIX763C{%s_%s_%s_%s}\n", flag_part1, flag_part2, flag_part3, flag_part4);
    } else {
        // Afficher un message d'erreur si l'entrée est incorrecte
        printf("Mauvaise entrée !\n");

        // Ajouter une variable inutile
        int a = 10;
        int b = 5;

        // Ajouter une fausse piste en affichant une somme inutile
        printf("Somme des chiffres de %d : %d\n", a, sum(a));

        // Ajouter une autre fausse piste en affichant un quotient inutile
        printf("%d / %d = %d\n", a, b, divide(a, b));

        // Ajouter une variable flag qui indique un faux flag
        int fake_flag = 0;
        printf("flag : %d\n", fake_flag);
    }

    free(x);

    return 0;
}
