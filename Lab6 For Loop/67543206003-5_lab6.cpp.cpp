/*
    จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
    - หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
    - หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น

    Test case:
        Enter value:
            11
    Output:
        Series: 1 3 5 7 9 11

    Test case:
        Enter value:
            8
    Output:
        Series: 8 6 4 2 0
*/

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
