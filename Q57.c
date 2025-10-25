#include <stdio.h>
#include <limits.h> 

int main() {
    int n, i;
    int max1, max2;

    printf("Enter the number of elements (N): ");

    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Error: Please enter a valid number of elements (N > 1).\n");
        return 1; 
    }

    int numbers[n]; 

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

   
    max1 = INT_MIN;
    max2 = INT_MIN;

    for (i = 0; i < n; i++) {
        int current_number = numbers[i];

        
        if (current_number > max1) {
         
            max2 = max1;
            
            max1 = current_number;
        }
        
        else if (current_number > max2 && current_number != max1) {

            max2 = current_number;
        }
    }


    printf("\n--- Results ---\n");
    if (max2 == INT_MIN) {
        
        printf("The Maximum element is: %d\n", max1);
        printf("A distinct second maximum element could not be found.\n");
    } else {
        printf("The Maximum element is: %d\n", max1);
        printf("The Second Maximum element is: %d\n", max2);
    }

    return 0;
}