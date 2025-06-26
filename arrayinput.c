// Input an array
#include <stdio.h>
void main(){
    int arr[5];
    int i;
    printf("Enter array elements: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: ");
    for(i=0;i<5;i++){
        printf("%d ", arr[i]);
    }
}