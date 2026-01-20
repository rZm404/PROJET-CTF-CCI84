/*
Bienvenue dans la Matrice. Vous êtes poursuivis par des agents virtuels et vous devez trouver un moyen de vous échapper. 
Tzank, un hacker légendaire de la Matrice, a découvert une backdoor qui pourrait vous sauver. Mais pour l'activer, il vous faut entrer le bon code. 
Trouvez le code, saisissez-le et échappez à la Matrice avant que les agents ne vous attrapent ! Mais attention, le code est à l'envers !
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int FletcherChecksum(unsigned char *data, int len) {
    unsigned int sum1 = 0, sum2 = 0;
    for (int index = 0; index < len; ++index) {
        sum1 = (sum1 + data[index]) % 255555;
        sum2 = (sum2 + sum1) % 255555;
    }
    return (sum2 << 8) | sum1;
}

int main(int argc, char **argv) {
    if (argc <= 1) {
        printf("Usage: %s input\n", argv[0]);
        return 1;
    }

    // Chaîne d'entrée
    char *input = "fdkdfvlpdfokjivdndfbdfgdfg225dfdv";

    // Calculer la somme de contrôle de Fletcher
    unsigned int checksum = FletcherChecksum((unsigned char *)input, strlen(input));

    // Afficher le résultat
    char *variable01 = malloc(100 * sizeof(char));
    sprintf(variable01, "ADDOLMMPS8262DKFNJ01%u", checksum);
    char variable01_reverse[100];

    int j = 0;
    for (int i = strlen(variable01) - 1; i >= 0; i--) {
        variable01_reverse[j] = variable01[i];
        j++;
    }
    variable01_reverse[j] = '\0';

    char *buffer = malloc(64 * sizeof(char));
    size_t len = strlen(argv[1]);
    if (len > 64) {
        printf("Argument trop long ! Le flag est : %s\n", variable01_reverse);
        return 1;
    }

    strcpy(buffer, argv[1]);

    if(strcmp(buffer, variable01_reverse) == 0) {
        printf("Flag : %s\n", variable01);
    } else {
        printf("Mauvaise entrée !\n");
    }

    free(buffer);
    free(variable01);

    return 0;
}

/*                                                                                                                                                                                               
┌──(root㉿seb)-[/home/seb/Téléchargements]
└─# ./MatrixCodeBreaker  
Usage: ./MatrixCodeBreaker input
                                                                                                                                                                                                  
┌──(root㉿seb)-[/home/seb/Téléchargements]
└─# ./MatrixCodeBreaker aaa
Mauvaise entrée !
                                                                                                                                                                                                  
┌──(root㉿seb)-[/home/seb/Téléchargements]
└─# ./MatrixCodeBreaker aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
Argument trop long ! Le flag est : 7227284110JNFKD2628SPMMLODDA
*/
