/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

/*
#include <stdio.h>
#include <string.h>

int main() {
    char word[ 10 ] ;
    char reversed[ 10 ] ;

    printf( "Enter word: " ) ;
    scanf( "%s", word ) ;

    // หาความยาวของคำที่กรอก
    int length = strlen( word ) ;

    
    for ( int i = 0 ; i < length ; i++ ) {
        reversed[ i ] = word[ length - 1 - i ] ;
    }
    reversed[ length ] = '\0'; // เพิ่ม null terminator เพื่อระบุจุดสิ้นสุดของสตริงนี้

    // ตรวจสอบว่าเป็น palindrome หรือไม่
    int isPalindrome = 1 ; // เริ่มต้นด้วยการตั้งค่าเป็น true (1)

    for ( int i = 0 ; i < length; i++ ) {
        if ( word[ i ] != reversed[ i ] ) {
            isPalindrome = 0 ; // ถ้าตัวอักษรไม่ตรงกัน เปลี่ยนเป็น false (0)
            break ; // ไม่จำเป็นต้องตรวจสอบต่อ
        }
    }

    if ( isPalindrome ) {
        printf("Pass.\n" ) ;
    } else {
        printf("Not Pass.\n" ) ;
    }


    return 0 ;
}
*/

#include <stdio.h>
int main() {
    char word[ 100 ] ;
    int i = 0 , j = 0 , isPalindrome = 1 ;

    // รับคำจากผู้ใช้
    printf( "Enter word: " ) ;
    scanf( "%s" , word ) ;

   
    while ( word[ i ] ) {
        if ( word[ i ] >= 'A' && word[ i ] <= 'Z' ) {
            word[ i ] = word[ i ] + 32 ; 
        }
        i++;
    }

    
    for ( j = 0 ; j < i / 2 ; j++ ) {
        if ( word[ j ] != word [ i - j - 1 ] ) {
            isPalindrome = 0 ; 
            break ;
        }
    }

    // แสดงผลลัพธ์
    if (isPalindrome) {
        printf( "Pass.\n" ) ;
    } else {
        printf( "Not Pass.\n" ) ;
    }

    return 0 ;
}