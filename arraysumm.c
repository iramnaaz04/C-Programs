// Sum of array elements
#include <stdio.h>
void main(){
    int arr[5], sum = 0;
    printf("Enter array elements: ");
    for(int i = 0 ;i < 5; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of array elements is: %d\n", sum);
    
}