// Q7]Accept distance in kilometers and convert into meters
#include <stdio.h>
void main(){
    float kilometers,meters;
    printf("Enter distance in kilometers: ");
    scanf("%f",&kilometers);

    //Convert into meters
    meters = kilometers * 10000;
    printf("Distance in meters is: %f\n",meters);
}