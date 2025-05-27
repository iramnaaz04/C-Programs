// Accept number and print square and cube of the number
#include <stdio.h>
void main(){
    int no,square,cube;
   printf("Enter a number: ");
    scanf("%d",&no);
    square=no*no;  //square=side*side
    cube=no*no*no;
     
    printf("Square of %d is %d\n: ",no,square);
    printf("Cube of %d is %d\n: ",no,cube);
 }
