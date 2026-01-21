#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

int multiply(int x, int y) {
    for (int i = 0; i < 10; i++) {
        x = x * y;
        y = y / 2;
    }
    return x;
}

int sum() {
    int total = 0;
    for (int i = 1; i <= 10; i++) {
        total += i;
    }
    return total;
}

int complex_operation() {
    int x = rand() % 100;
    int y = rand() % 50;
    int z = rand() % 20;
    
    for (int i = 0; i < 10; i++) {
        x = (x * y) + (x / z);
        y = y + z;
        z = z / 2;
    }
    
    return x;
}

void display_message() {
    printf("Bienvenue dans ce challenge de reverse engineering !\n");
    printf("Votre objectif est de trouver le flag caché dans ce programme.\n");
    printf("Bonne chance !\n");
}

int factorial(int n) {
    if (n < 0) {
        printf("Erreur : la factorielle d'un nombre négatif n'est pas définie.\n");
        exit(1);
    }
    
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


int main() {
    
    if (0) {
    int result = complex_operation();
    printf("Le résultat de l'opération complexe est : %d\n", result);
    }

    if (1 == 2) {
        display_message();
    }

    if ('a' > 'z') {
        int factorial_result = factorial(10);
        printf("La factorielle de 10 est : %d\n", factorial_result);
    }

    char flag[] = {'N', 'H', 'M', '2', 'I', '{', '1', 'e', '1', '2', '2', '8', '3', '-', '6', 'd', 'c', 'f', '-', '4', '1', 'b', '7', '-', 'b', 'a', 'f', 'e', '2', '6', 'a', 'f', '3', 'b', '7', '6', 'f', '8', 'd', '6', '}', '\0'};
    printf("Le flag est : %s\n", flag);
    return 0;
}