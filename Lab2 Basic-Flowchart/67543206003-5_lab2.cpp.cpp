/*จงเรียนโปรแกรมรับค่าจากผู้ใช้ และทำการแสดงผลบนหน้าจอคอมพิวเตอร์ ให้ได้ผลลัพธ์ดังต่อไปนี้

Testcase #1

Input :
Enter a character: 
O
Enter two integers: 
14 13
Enter a floating-point number: 
89.99082
Enter a string: 
Hello

Output :
You entered character: O
You entered integers: 14 and 13
You entered floating-point number: 89.99
You entered string: Hello

Testcase #2

Input :
Enter a character: 
T
Enter two integers: 
89 234
Enter a floating-point number: 
1.23456
Enter a string: 
World

Output :
You entered character: T
You entered integers: 89 and 234
You entered floating-point number: 1.23
You entered string: World
*/

#include <stdio.h>

int main() {
    char c ;
    int num1 , num2 ;
    float floatNum ;
    char str[ 100 ] ;

    printf( "Enter a character: \n" ) ;
    scanf( " %c" , &c ) ; 

    printf( "Enter two integers: \n" ) ;
    scanf( "%d %d", &num1, &num2 ) ;

    printf( "Enter a floating-point number: \n" ) ;
    scanf( "%f" , &floatNum ) ;

    printf( "Enter a string: \n" ) ;
    scanf( "%s", str ) ; 

    
    printf( "You entered character: %c\n" , c ) ;
    printf( "You entered integers: %d and %d\n" , num1, num2 ) ;
    printf( "You entered floating-point number: %.2f\n" , floatNum ) ; 
    printf( "You entered string: %s\n" , str ) ;

    return 0 ;
}
