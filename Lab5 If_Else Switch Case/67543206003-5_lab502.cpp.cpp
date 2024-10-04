/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง if else ได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !

    Test case:
        enter score :
            hello
    Output:
        please enter number only.
*/

#include <stdio.h>

int main () {
    int score ;
    printf( "Please Enter Score : " ) ;

    if(scanf( "%d", &score ) != 1){
        printf( "Please Enter Number Only." ) ;
        return 1 ;
    }

    switch (score / 5) {
    case 20 :
        printf( "A!" ) ;
        break ;
    case 18 :
        printf( "A!" ) ;
        break;
    case 16 :
        printf( "A!" ) ;
        break;
    case 15 :
        printf( "B+!" ) ;
        break ;
    case 14 :
        printf( "B!" ) ;
        break;
    case 13 :
        printf( "C+!" ) ;
        break;
    case 12 :
        printf( "C!" ) ;
        break;
    case 11 :
        printf( "D+!" ) ;
        break;
    case 10 :
        printf( "D!" ) ;
        break;
    case 9 :
        printf( "F!" ) ;
        break;
    case 8 :
        printf( "F!" ) ;
        break;
    case 7 :
        printf( "F!" ) ;
        break;
    case 6 :
        printf( "F!" ) ;
        break;
    case 5 :
        printf( "F!" ) ;
        break;
    case 4 :
        printf( "F!" ) ;
        break;
    case 3 :
        printf( "F!" ) ;
        break;
    case 2 :
        printf( "F!" ) ;
        break;
    case 1 :
        printf( "F!" ) ;
        break;
    case 0 :
        printf( "F!" ) ;
        break;
    default:
        printf( "Please Enter Number Only" ) ;
        break ;
    }
}