// Q6]Accept distance in meters and convert into kilometers
#include <stdio.h>
void main() {
    float meters,kilometers;

    printf("Enter distance in meters: ");
    scanf("%f",&meters);

    // Converting meters into kilometers
    kilometers =meters/1000;
    printf("Distance in kilometers is: %f\n",kilometers);
}