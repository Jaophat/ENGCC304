#include <stdio.h>

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 1:
            for (int j = 0; j < number; j++) {
                for (int i = 1; i <= number; i++) {
                    if (i == number - j) {
                        printf("1 ");
                    } else {
                        printf("0 ");
                    }
                }
                printf("\n"); 
            }
            break;

        case 0:
            for (int j = 0; j < number; j++) {
                for (int i = 0; i < number; i++) {
                    if (i == j) {
                        printf("1 ");
                    } else {
                        printf("0 ");
                    }
                }
                printf("\n"); 
            }
            break;
    }

    return 0;
}
