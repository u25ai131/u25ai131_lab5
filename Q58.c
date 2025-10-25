#include <stdio.h>

#define SIZE 10 

int main() {
    
    int array1[SIZE];
    int array2[SIZE];
    int sum_array[SIZE];
    int i; 


    printf("Enter 10 integers for the FIRST array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("Element 1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    
    printf("\nEnter 10 integers for the SECOND array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("Element 2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

 
    printf("\n--- Resulting Sum Array ---\n");
    printf("Index | Array 1 | Array 2 | Sum Array\n");
    printf("------|---------|---------|----------\n");

 
    for (i = 0; i < SIZE; i++) {
        
        sum_array[i] = array1[i] + array2[i];

     
        printf("  %2d  |  %5d  |  %5d  |  %7d\n", 
               i, array1[i], array2[i], sum_array[i]);
    }

    return 0;
}