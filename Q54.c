#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    int i;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 10; i++) {
        sum = sum + numbers[i];
    }

    printf("\nThe sum of the 10 numbers is: %d\n", sum);

    return 0;
}