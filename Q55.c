#include <stdio.h>

int main() {
    int numbers[10];
    int even_count = 0;
    int odd_count = 0;
    int i;

    printf("Enter 10 integers:\n");


    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }


    for (i = 0; i < 10; i++) {

        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {

            odd_count++;
        }
    }


    printf("\n Results -\n");
    printf("Total number of Even elements: %d\n", even_count);
    printf("Total number of Odd elements: %d\n", odd_count);

    return 0;
}