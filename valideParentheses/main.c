#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char* s) {
    
    int sizeOfString = strlen(s);

    for(int i = 0 ; i< sizeOfString; i++){
        switch(s[i]){
            case '(':
                if(s[i+1] != ')'){
                    return false;
                }
                break;
            case '[':
                if(s[i+1] != ']'){
                    return false;
                }
                break;
            case '{':
                if(s[i+1] != '}'){
                    return false;
                }
        }

    }
    return true;
}

bool isValidCorrection(char* s) {
    int len = strlen(s);
    char stack[len];
    int top = -1; // Indice du sommet de la pile

    // Parcours de chaque caractère dans la chaîne
    for (int i = 0; i < len; i++) {
        // Si le caractère est un ouvrant, le pousser sur la pile
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            // Sinon, le caractère est une fermeture
            // Vérifier s'il correspond au dernier ouvrant sur la pile
            if (top == -1 || 
                (s[i] == ')' && stack[top] != '(') ||
                (s[i] == ']' && stack[top] != '[') ||
                (s[i] == '}' && stack[top] != '{')) {
                return false; // Pas de correspondance, chaîne invalide
            }
            top--; // Retirer l'ouvrant correspondant de la pile
        }
    }

    // Si la pile est vide à la fin, la chaîne est valide
    return top == -1;
}

int main(int argc, char** argv) {

    bool answer;

    char* s1 = "()";
    char* s2 = "()[]{}";
    char* s3 = "(]";

    answer = isValid(s1);
    printf("\nanswer 1 : %d",answer);
    answer = isValid(s2);
    printf("\nanswer 2 : %d",answer);
    answer = isValid(s3);
    printf("\nanswer 2 : %d",answer);

    return 0;
}
