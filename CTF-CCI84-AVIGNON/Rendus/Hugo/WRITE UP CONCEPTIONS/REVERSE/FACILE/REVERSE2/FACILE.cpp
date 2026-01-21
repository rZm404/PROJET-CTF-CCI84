#include <iostream>
#include <string>
#include "obfuscate.h"

char* elflaggito = AY_OBFUSCATE("WeoN8opBv@Iy7lo7PJp&yq3u9etiW04cR#n$_Y!zXtffcwq3XJUlD&lu$I1X");
#define PASSWORD elflaggito

int main() {
    std::string input;
    std::cout << "Enter the password: ";
    std::cin >> input;
    if (input == PASSWORD) {
        std::cout << AY_OBFUSCATE("Félicitations, voici le flag : NHM2I{jkMOPawBRl-SjwMGEu1EJ-4Z4TNCtzxd}!\n");
    } else {
        std::cout << AY_OBFUSCATE("Access denied!\n");
    }
    return 0;
}
