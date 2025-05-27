// Q8]Accept value of radius and calculate area and perimeter of Circle
#include <stdio.h>
void main() {
    float radius,area,perimeter;
    float pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("Area of the circle is: %f\n", area);
    printf("Perimeter of the circle is: %d\n", perimeter);

}