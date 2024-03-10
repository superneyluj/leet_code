#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int romanToInt(char* s) {
    
    int sizeOfString = strlen(s);
    int integerResut = 0;

    for(int i = 0; i < sizeOfString; i++){
        printf("\nelement %c",s[i]);
        switch(s[i]){      
            case 'I':
                if(s[i+1]=='V'){
                    integerResut = integerResut + 4;
                    i++;
                    break;
                }
                integerResut = integerResut + 1;
                break;
            case 'V':
                integerResut = integerResut + 5;
                break;
            case 'X':
                if(s[i+1]=='C'){
                    integerResut = integerResut + 90;
                    i++;
                    break;
                }
                integerResut = integerResut + 10;
                break;
            case 'L':
                integerResut = integerResut + 50;
                break;
            case 'C':
                if(s[i+1]=='M'){
                    integerResut = integerResut + 900;
                    i++;
                    break;
                }
                integerResut = integerResut + 100;
                break;
            case 'D':
                integerResut = integerResut + 500;
                break;
            case 'M':
                integerResut = integerResut + 1000;
                break;
        }
        printf("\nvaleur : %d",integerResut);
    }
    return integerResut;
}


int main(int argc, char** argv){

    char *s1 = "III";
    char *s2 = "LVIII";
    char *s3 = "MCMXCIV";

    printf("\nRoman = %s , Integer = %d",s3,romanToInt(s3));

    return 0;
}