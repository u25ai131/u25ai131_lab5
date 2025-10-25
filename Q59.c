#include <stdio.h>

#define SIZE 10

int main() {
    
    int arrayA[SIZE];
    int arrayB[SIZE];
    int temp;
    int i;

    
    printf("Enter 10 integers for Array A:\n");
    for (i = 0; i < SIZE; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &arrayA[i]);
    }


    printf("\nEnter 10 integers for Array B:\n");
    for (i = 0; i < SIZE; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &arrayB[i]);
    }

    
    printf("\n--- Arrays BEFORE Swapping ---\n");
    printf("Array A: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arrayA[i]);
    }
    printf("\nArray B: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arrayB[i]);
    }
    printf("\n");

 
    for (i = 0; i < SIZE; i++) {
       
        temp = arrayA[i];


        arrayA[i] = arrayB[i];

        
        arrayB[i] = temp;
    }

    printf("\n--- Arrays AFTER Swapping ---\n");
    printf("Array A: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arrayA[i]);
    }
    printf("\nArray B: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arrayB[i]);
    }
    printf("\n");

    return 0;
}