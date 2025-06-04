//Area of Circle, Rectangle, Triangle;
#include <stdio.h>
void main(){
    char choice;
    int radius,base,height,length,breath;
    float area,pi = 3.14;

    printf("Enter your choice (C= Area of Circle, R= Area of Rectangle, T= Area of Triangle): ");
    scanf("%c", &choice);

    switch (choice){
        case 'C':
        printf("Enter radius of the circle: ");
        scanf("%d", &radius);
        area = pi * radius * radius;
        printf("Area of circle is: %f\n", area);
        break;
        case 'R':
        printf("Enter length of the rectangle: ");
        scanf("%d", &length);
        printf("Enter breadth of the rectangle: ");
        scanf("%d", &breath);
        area = length * breath;
        printf("Area of rectangle is: %f\n", area);
        break;
        case 'T':
        printf("Enter base of the triangle: ");
        scanf("%d", &base);
        printf("Enter height of the triangle: ");
        scanf("%d", &height);
        area = 0.5 * base * height;
        printf("Area of triangle is: %f", area);
        break;
        default:
        printf("Enter valid choice OR Invalid choice selected!!");
    }
}