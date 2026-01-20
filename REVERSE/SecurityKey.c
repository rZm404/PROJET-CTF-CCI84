//Trinity est une agente de la résistance qui a été missionnée pour pirater un terminal des machines dans la matrice. Elle est en train d'entrer furtivement dans le bâtiment où se trouve le terminal, évitant les détecteurs de mouvement et les gardes des machines.

//Une fois à l'intérieur, elle parvient à localiser le terminal et s'assoit devant l'ordinateur. Elle sait qu'elle a besoin d'une clé de sécurité pour contourner les systèmes de défense des machines et accéder aux données vitales pour la résistance.

//Trinity sort son ordinateur portable et lance le programme "SecurityKey".
    
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    char input_key[20];
    int tries = 4;
    while (tries > 0){
        printf("Enter the license key:");
        scanf("%s", input_key);
        printf("Checking License: %s\n", input_key);
        if(strcmp(input_key, "AAAA-Z10N-42-OK")==0) {
            printf("Access Granted!\n");
            printf("\n#####  ACCESS GRANTED  #####\n");
            printf("### WELCOME TO THE TERMINAL ###\n");
            printf("#terminal㉿user-[/home/sentinelle01]# pkexec bash -c \"echo 0 > /proc/sys/ker/randomize_va_space&& exec bash\n");
            printf("#terminal㉿root-[/home/sentinelle01]# successfully acquired root access\n");
            printf("# Trinity: Elevated privileges acquired #\n");
            printf("NHM2i{AAAA-Z10N-42-OK-CodeByrZmFeatTrinity}\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            return 0;
        } else {
            if (tries == 4)
                printf("Access Denied, try again\n");
            else if (tries == 3)
                printf("Be careful, one more mistake and the alarm will be triggered\n");
            else if (tries == 2)
                printf("Hurry, the machines are closing in!\n");
             else if (tries == 1)
                printf("Trinity under fire from enemy machines...\n");    
            tries--;
        }
    }
    printf("You have been caught by the machines. The terminal explode on Trinity.\n");
    return 0;
}
