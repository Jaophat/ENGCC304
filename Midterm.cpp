#include <stdio.h>

int main() {
    int rows;

    printf("Enter Rows: ");
    scanf("%d", &rows);

    switch (rows % 2){
    case 0:
            for (int i = 1; i <= rows; i++) {
            int n = 1;

            for (int k = rows - i; k > 0; k--) {
                printf(" ");
            }

            for (int j = 1; j <= i; j++) {
                printf("%d ", n);
                n = n * (i - j) / j;
            }

            printf("\n");
        }
        break;
    case 1:
            for (int i = 1; i >= rows; i--) {
            int n = 1;

            for (int k = rows - i; k > 0; k--) {
                printf(" ");
            }

            for (int j = 1; j <= i; j++) {
                printf("%d ", n);
                n = n * (i - j) / j;
            }

            printf("\n");
        }
        break;
    
    default:
        break;
    }

    return 0;
}
