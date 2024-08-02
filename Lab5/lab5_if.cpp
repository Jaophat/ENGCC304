#include <stdio.h>

int main() {
    int score = 0;
    printf("Please enter your score: ");
    
    if(scanf("%d",&score) != 1){
        printf("Plese Enter Number Only");
        return 1 ;
    }
    
    if (score >= 80) {
        printf("Grade A");
    } else if (score >= 75 && score < 80) {
        printf("Grade B+");
    } else if (score >= 70 && score < 75) {
        printf("Grade B");
    } else if (score >= 65 && score < 70) {
        printf("Grade C+");
    } else if (score >= 60 && score < 65) {
        printf("Grade C");
    } else if (score >= 55 && score < 60) {
        printf("Grade D+");
    } else if (score >= 50 && score < 55) {
        printf("Grade D");
    } else {
        printf("Grade F");
    }
    
    return 0;
}
