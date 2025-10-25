#include <stdio.h>


void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void selectionSort(int arr[], int size) {
    int i, j, min_idx, temp;

    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

     
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, i;


    printf("Enter the number of elements (N) in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a positive number of elements.\n");
        return 1;
    }

 
    int numbers[n];

    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nArray Before Sorting: ");
    printArray(numbers, n);

    selectionSort(numbers, n);

    printf("Array After Sorting:  ");
    printArray(numbers, n);

    return 0;
}