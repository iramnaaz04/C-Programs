// Q7]Accept sides of triangle and print type of triangle i.e whether it is Equilateral, Isosceles, Scalane or Right Angle triangle
#include <stdio.h>
void main(){
    int a, b, c;
    printf("Enter length of side a: ");
    scanf("%d",&a);
    printf("Enter lenght of side b: ");
    scanf("%d",&b);
    printf("Enter length of side c: ");
    scanf("%d",&c);

    if(a==b && b==c){
        printf("Equilateral triangle\n");
    }
    else if(a==b || b==c || a==c){
        printf("Isosceles triangle\n");
    }
    else{
        printf("Scalene traingle");
    }
}