// Take array input from user
#include <stdio.h>
void main(){
    int arr[5];
    printf("Enter 5 elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    printf("You entered: \n");
    for(int i=0;i<5;i++){
        printf("%d", arr[i]);
    }
}