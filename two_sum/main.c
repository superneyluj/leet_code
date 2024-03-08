#include <stdio.h>
#include <stdlib.h>

/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/

int *twoSum(int *nums, int numSize, int target){
    int *result = (int *)malloc(2 * sizeof(int));
    for (int i = 0; i < numSize; i++){
        for (int j = i + 1; j < numSize; j++){
            if (nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int main (int argv, char *argc[]){

    int *num;
    int size = 5;
    int target = 8;

    num = (int *)malloc(size * sizeof(int));


    //Remplissage du tableau avec des nombres aléatoires compris entre 1 et 9
    for (int i = 0; i < size; i++){
        num[i] = rand() % 10;
    }
    
    //Affichage du tableau
    for (int i = 0; i < size; i++){
        printf("%d ", num[i]);
    }

    int *result = twoSum(num, size, target);

    //Affichage du résultat
    printf("\n%d %d", result[0], result[1]);

    return 0;

}