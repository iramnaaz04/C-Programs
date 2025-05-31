// Q3]Accept a year and check whether it is Leap year or not
#include <stdio.h>
void main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year % 4 == 0){
        printf("It is a leap year\n");
    }
    else{
        printf("It is not a leap year\n");
    }
}