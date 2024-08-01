#include <stdio.h>

int main() {
    char Oper;
    float Num1, Num2;
    
    printf("Calculator: ");
    scanf("%f %c %f", &Num1, &Oper, &Num2);

    switch (Oper) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", Num1, Num2, Num1 + Num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", Num1, Num2, Num1 - Num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", Num1, Num2, Num1 * Num2);
            break;
        case '/':
            if (Num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", Num1, Num2, Num1 / Num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please try again.\n");
            break;
    }

    return 0;
}
