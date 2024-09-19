/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/

#include <stdio.h>

int main() {
    int n;

    // รับขนาดของ array
    printf("Enter N : \n");
    scanf("%d", &n);

    // สร้าง array ตามขนาดที่ได้รับ
    int array[n];

    // รับค่าเข้าไปใน array
    for (int i = 0; i < n; i++) {
        printf("Enter Value[%d] : ", i);
        scanf("%d", &array[i]);
    }

    // แสดง Index ของ array
    printf("Output: \nIndex:  ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }

    // ตรวจสอบจำนวนเฉพาะและแสดงค่า
    printf("\nArray:  ");
    for (int i = 0; i < n; i++) {
        int num = 1; // สมมุติว่าค่าใน array มีค่าเป็นจำนวนเฉพาะให้กำหนด num =1

        // ค่าที่น้อยกว่าหรือเท่ากับ 1 ไม่เป็นจำนวนเฉพาะ
        if (array[i] <= 1) {
            num = 0; //เปลี่ยนค่า num = 0 หมายถึง ไม่เป็นจำนวนเฉพาะ
        } else {
            // ตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
            for (int j = 2; j * j <= array[i] ; j++) {
                if (array[i] % j == 0) {
                    num = 0; //เปลี่ยนค่า num = 0 หมายถึง ไม่เป็นจำนวนเฉพาะ
                    break;
                }
            }
        }

        // แสดงผลลัพธ์
        if (num == 1) {
            printf("%d ", array[i]);
        } else {
            printf("# ");
        }
    }

    printf("\n");
    return 0;
}