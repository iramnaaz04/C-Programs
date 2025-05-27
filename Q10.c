// Q10]Accept marks in 6 subjects and calculate total and percentage of student
#include <stdio.h>
void main() {
    int Physics, Chem,Maths1,Maths2,German,French;
    float total,percentage;
    printf("Enter marks in Physics: ");
    scanf("%d",&Physics);
     printf("Enter marks in Chemistry: ");
    scanf("%d",&Chem);
     printf("Enter marks in Maths1: ");
    scanf("%d",&Maths1);
     printf("Enter marks in Maths2: ");
    scanf("%d",&Maths2);
     printf("Enter marks in German: ");
    scanf("%d",&German);
     printf("Enter marks in French: ");
    scanf("%d",&French);
    total = Physics + Chem + Maths1 + Maths2 + German + French;
    percentage = (total /600)*100;
    printf("Total marks: %f\n",total);
}