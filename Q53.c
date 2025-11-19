#include <stdio.h>

int main() {
    int i, j, space, stars;

    // Top half including middle line
    for (i = 1; i <= 4; i++) {
        stars = 2 * i - 1;
        space = 4 - i;

        for (j = 1; j <= space; j++)
            printf(" ");

        for (j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }

    // Bottom half
    for (i = 3; i >= 1; i--) {
        stars = 2 * i - 1;
        space = 4 - i;

        for (j = 1; j <= space; j++)
            printf(" ");

        for (j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
