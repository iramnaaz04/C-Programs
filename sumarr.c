// Sum of array elements
#include <stdio.h>
void main(){
    int sum=0;
    int arr[] = {5,2,5,3,4,5};
    for(int i=0;i<=5;i++){
        sum = sum + arr[i];
    }
    printf("Sum is %d\n", sum);
}
