/*
    จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
    ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5
    แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้

    struct Student {
        char Name[20]  ;
        char ID[5]  ;
        float ScoreSub1  ;
        float ScoreSub2  ;
        float ScoreSub3  ;
        float ScoreSub4  ;
        float ScoreSub5  ;
    } typedef S  ;

    Test Case:
        Enter the details of 3 students :
        Student 1:
        Name: 
            John Doe
        ID: 
            101
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            64
        Scores in Subject 3: 
            66
        Scores in Subject 4: 
            54
        Scores in Subject 5: 
            56

        Student 2:
        Name: 
            Jane Smith
        ID: 
            102
        Scores in Subject 1: 
            43
        Scores in Subject 2: 
            70
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            77
        Scores in Subject 5: 
            80

        Student 3:
        Name: 
            Mark Johnson
        ID: 
            103
        Scores in Subject 1: 
            77
        Scores in Subject 2: 
            74
        Scores in Subject 3: 
            76
        Scores in Subject 4: 
            81
        Scores in Subject 5: 
            69

    Output:
    Student Details:
    Student 1:
    Name: John Doe
    ID: 101
    Scores: 77 64 66 54 56
    Grades: B+  C C+ D  D+
    Average Scores: 63.4

    Student 2:
    Name: Jane Smith
    ID: 102
    Scores: 43 70 76 77 80
    Grades:  F  B B+ B+  A
    Average Scores: 69.2

    Student 3:
    Name: Mark Johnson
    ID: 103
    Scores: 77 74 76 81 69
    Grades: B+  B B+  A C+
    Average Scores: 75.4
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char FirstName[ 20 ] ;
    char LastName[ 20 ] ;
    char ID[ 13 ] ;
    int ScoreSub1 ;
    int ScoreSub2 ;
    int ScoreSub3 ;
    int ScoreSub4 ;
    int ScoreSub5 ;
    float averageScore ; 
} typedef S ;

char* getGrade( int score ) {
    if ( score >= 90 ) return "A" ;
    else if ( score >= 85 ) return "B+" ;
    else if ( score >= 80 ) return "B" ;
    else if ( score >= 75 ) return "C+" ;
    else if ( score >= 70 ) return "C" ;
    else if ( score >= 65 ) return "D+" ;
    else if ( score >= 60 ) return "D" ;
    else return "F" ;
}

int main(  ) {
    int N = 3 ;
    struct Student Room[ N ] ;

    printf( "Enter the details of %d students:\n", N ) ;

    for ( int i = 0 ; i < N ; i++ ) {
        printf( "Student %d:\n", i + 1 ) ;

        printf( "First Name: " ) ;
        scanf( "%19s", Room[ i ].FirstName ) ;

        printf( "Last Name: " ) ;
        scanf( "%19s", Room[ i ].LastName ) ;

        printf( "ID: " ) ;
        scanf( "%12s", Room[ i ].ID ) ;

        
        printf( "Scores in Subject 1: " ) ;
        scanf( "%d", &Room[ i ].ScoreSub1 ) ;
        printf( "Scores in Subject 2: " ) ;
        scanf( "%d", &Room[ i ].ScoreSub2 ) ;
        printf( "Scores in Subject 3: " ) ;
        scanf( "%d", &Room[ i ].ScoreSub3 ) ;
        printf( "Scores in Subject 4: " ) ;
        scanf( "%d", &Room[ i ].ScoreSub4 ) ;
        printf( "Scores in Subject 5: " ) ;
        scanf( "%d", &Room[ i ].ScoreSub5 ) ;
        
       
        Room[ i ].averageScore = ( Room[ i ].ScoreSub1 + Room[ i ].ScoreSub2 + Room[ i ].ScoreSub3 + Room[ i ].ScoreSub4 + Room[ i ].ScoreSub5 ) / 5.0 ;
    }

    printf( "\nStudent Details:\n" ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        printf( "Student %d:\n", i + 1 ) ;
        printf( "Name: %s %s\n", Room[ i ].FirstName, Room[ i ].LastName ) ;
        printf( "ID: %s\n", Room[ i ].ID ) ;
        printf( "Scores: %d %d %d %d %d\n", 
               Room[ i ].ScoreSub1, 
               Room[ i ].ScoreSub2, 
               Room[ i ].ScoreSub3, 
               Room[ i ].ScoreSub4, 
               Room[ i ].ScoreSub5 
               ) ;
        printf( "Grades: %s %s %s %s %s\n", 
               getGrade( Room[ i ].ScoreSub1 ), 
               getGrade( Room[ i ].ScoreSub2 ), 
               getGrade( Room[ i ].ScoreSub3 ), 
               getGrade( Room[ i ].ScoreSub4 ), 
               getGrade( Room[ i ].ScoreSub5 ) 
               ) ;
        printf( "Average Scores: %.2f\n\n", Room[ i ].averageScore ) ;
    }
    
    return 0 ;
}
