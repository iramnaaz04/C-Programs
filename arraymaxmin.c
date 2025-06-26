// Array max and min
#include <stdio.h>
void main(){
    int arr[5],max,min;
    printf("Enter array elements: ");
    for(int i = 0 ; i < 5 ; i ++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > max)
            max = arr[i];
        else if(arr[i] < min)
            min = arr[i];
    }
    printf("Max is: %d\n", max);
    printf("Min is: %d\n", min);
}