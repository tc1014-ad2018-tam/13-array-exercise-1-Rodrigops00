//Rodrigo Perez Solis
//A01411278
//Arrays
#include <stdio.h>

int main() {
    int r;
//i tell the user how the program is going to work

    printf("In this program you will insert numbers and i will show em to you in diverse orders\n");
// i ask the user how many numbers would he like to enter
    printf("how many numbers would you like to enter?\n");
    scanf("%d", &r);
// I put the array value
    int numeros[r];
//i ask the user the numbers one by one
    for (int i = 0; i < r; i++) {
        printf("Insert your numbers one by one:\n");
        scanf("%i", &numeros[i]);
    }
//i show the user the numbers in the order he entered them
    printf("here are your numbers in the order you entered\n");

    for (int i = 0; i < r; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
//i show the user the numbers in the reverse order
    printf("here you have the numbers in the reverse order\n");
    for(int i = r; i > 0; i--){
        printf("%d ", numeros[i-1]);
    }
    return 0;
}