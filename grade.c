//Grade
#include <stdio.h>
void main(){
    char grade;
    printf("Enter your grade (A, B, C, D, F): ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;   
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
           printf("Fail\n");
           break;
        default:
        printf("Invalid grade entered\n");
    }
}