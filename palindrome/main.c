#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    //on stocke la valeur originale de num
    int originalNum = num;
    printf("originalNum: %d\n", originalNum);
    //on initialise la variable reverse à 0 qui sera utilisée pour stocker le nombre inversé
    int reverse = 0;

    //On itère jusqu'à ce que num soit égal à 0
    while (num > 0) {
        //on récupère le dernier chiffre de num
        int digit = num % 10;
        printf("digit: %d\n", digit);
        //on ajoute le chiffre récupéré à reverse
        //on multiplie reverse par 10 pour décaler les chiffres de 1 vers la gauche
        reverse = reverse * 10 + digit;
        printf("reverse: %d\n", reverse);
        //on divise num par 10 pour supprimer le dernier chiffre
        num /= 10;
        printf("num: %d\n", num);
    }

    return (originalNum == reverse);
}

int main (int argv, char ** argc ){


int case1 = 121;
int case2 = -121;
int case3 = 10;

printf("Case 1: %d\n", isPalindrome(case1));
printf("Case 2: %d\n", isPalindrome(case2));
printf("Case 3: %d\n", isPalindrome(case3));

}