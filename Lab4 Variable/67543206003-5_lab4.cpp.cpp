/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374000.00
*/

#include <stdio.h>

int main() {
    char id [11]; // ตัวแปร id มีอาร์เรย์เก็บได้สูงสุด 10 ตัวอักษร และ 1 ช่องสำหรับ null terminator (ค่าว่าง)
    int hours;
    float salary;
    float income;
    //Input
    printf("Input the Employees ID(Max. 10 chars): ");
    fgets(id, sizeof(id), stdin); //จะรับค่าจากแป้นพิมพ์ เข้าไปในอาร์เรย์ id และจะแสดงผลไม่เกิน 10 ตัวอักษร

    printf("Input the working hrs: ");
    scanf("%d", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &salary);
    
    printf("\n");
    
    //Process
    income = salary * hours;
    
    //Output
    printf("Expected Output: \n");
    printf("Employees ID = %s", id);
    printf("Salary =  %.2f U$", income);

    return 0;
}
