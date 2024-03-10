#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strSize) {
    // Initialisez le préfixe avec la première chaîne
    //Allocation de mémoire pour le préfixe avec strdup qui alloue dans la mémoire heap donc la donnée est modifiable
    char* prefix = strdup(strs[0]);
    printf("\n prefix : %s\n", prefix);

    for (int i = 1; i < strSize; i++) {
        int j = 0;
        // Comparez chaque caractère de la chaîne actuelle avec le préfixe
        while (strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0'; // Mettez fin au préfixe à la position j
    }

    return prefix;
}

int main(int argc, char** argv) {

    char* input1[] = {"flower", "flow", "flight"};
    char* input2[] = {"dog", "racecar", "car"};
    char* output;

    int strSize = 3;

    output = longestCommonPrefix(input1, strSize);
    printf("Longest common prefix for input1: %s\n", output);
    free(output);

    output = longestCommonPrefix(input2, strSize);
    printf("Longest common prefix for input2: %s\n", output);
    free(output);

    return 0;
}
