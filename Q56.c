#include <stdio.h>

int main() {
    int numbers[10];
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int i;

    printf("Enter 10 integers (including positive, negative, and zero):\n");


    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 10; i++) {
     
        if (numbers[i] > 0) {
            positive_count++;
        }
        
        else if (numbers[i] < 0) {
            negative_count++;
        }
      
        else {
            zero_count++;
        }
    }

  
    printf("\n Results -\n");
    printf("Total number of Positive elements: %d\n", positive_count);
    printf("Total number of Negative elements: %d\n", negative_count);
    printf("Total number of Zero element: %d\n", zero_count);

    return 0;
}