/*
 Nom du challenge : `Crypto-Zion` en référence à la lutte contre les machines dans la matrice et à l'utilisation de la cryptographie pour protéger un message secret.

**Enoncer Débutant et Experimentés : **

Dans l'univers Matrix, Morpheus est le leader d'un groupe de révolutionnaires qui luttent contre les machines qui ont pris le contrôle de la réalité. Il a découvert l'existence d'un programme puissant caché dans la matrice qui pourrait donner à ses alliés un avantage décisif dans leur lutte contre les machines. Il sait que ce programme est protégé par un mot de passe secret, et il doit trouver un moyen de le débloquer pour utiliser son plein potentiel.

Morpheus a entendu parler d'un hacker connu sous le nom de Neo qui pourrait être celui qui pourrait trouver ce mot de passe. Il décide de missionner Neo pour débloquer ce programme puissant. Il lui explique que le programme est protégé par un chiffrement à base de XOR et qu'il doit trouver le mot de passe en clair pour élever ses droits utilisateurs.

Neo accepte la mission et commence à travailler sur le déchiffrement du mot de passe. Il  doit utiliser ses talents de programmeur pour tester des combinaisons de mots de passe jusqu'à ce qu'il trouve celui qui déchiffre le message chiffré. Il découvre la clé secrète, et ensuite il  faut utiliser cette clé secrète pour déchiffrer le message chiffré pour élever ses droits utilisateurs et débloquer le programme puissant.

Le programme de reverse engineering :
*/
#include <stdio.h>
#include <string.h>

void xor_encrypt(char *message, char *key) {
    int message_len = strlen(message);
    int key_len = strlen(key);

    for (int i = 0; i < message_len; i++) {
        message[i] ^= key[i % key_len];
    }
}

void xor_decrypt(char *message, char *key) {
    xor_encrypt(message, key);
}

int main() {
    char message[1000] = "AB347OTDE2LASON4BY5LVO6";
    char key[100] = "NHMI_SECRET_BY_CCI_84";
    char input_message[1000];
    int flag = 1;
    int tries = 3;

    xor_encrypt(message, key);
    printf("Encrypted message: %s\n", message);
    
    // xor_decrypt(message, key);
    // printf("Decrypted message: %s\n", message);

    while(flag) {
        if (tries == 3) {
            printf("Enter the decrypted message : ");
        } else if (tries == 2) {
            printf("Be careful, you are being spotted by the machines.\nEnter the decrypted message : ");
        } else if (tries == 1) {
            printf("Hurry, the machines are invading Zion!\nEnter the decrypted message : ");
        } else {
            printf("You have been caught by the machines. Game over.\n");
            flag = 0;
            break;
        }
        scanf("%s", input_message);
        if (strcmp(input_message, message) == 0) {
            printf("Great! Quick, enter the code to activate the super-powered software to keep us away from the machines!\n");
            printf("NHM2I{%sCodeByrZm}\n", message);
            flag = 0;
        } else {
            printf("\n");
            tries--;
        }
    }
    return 0;
}
