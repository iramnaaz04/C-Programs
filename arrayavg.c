// Average of array elements
#include <stdio.h>
void main(){
    int arr[5], avg = 0;
    printf("Enter array elements: ");
    for(int i = 0 ;i < 5; i++){
        scanf("%d", &arr[i]);
        avg = avg + arr[i];
    }
    avg = avg / 5;
    printf("Average of array elements is: %d\n", avg);
}