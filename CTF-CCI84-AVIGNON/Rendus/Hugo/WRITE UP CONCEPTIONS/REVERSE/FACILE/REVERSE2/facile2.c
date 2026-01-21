#include <stdio.h>
#include <string.h>

#define PASSWORD "WeoN8opBv@Iy7lo7PJp&yq3u9etiW04cR#n$_Y!zXtffcwq3XJUlD&lu$I1X"

int main() {
    char input[256];
    printf("Enter the password: ");
    scanf("%s", input);
    if (strcmp(input, PASSWORD) == 0) {
        printf("Félicitations, voici le flag : NHM2I{jkMOPawBRl-SjwMGEu1EJ-4Z4TNCtzxd}!\n");
    } else {
        printf("Access denied!\n");
    }
    return 0;
}