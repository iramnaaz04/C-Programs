// Maximum of an array
#include <stdio.h>
void main(){
    int arr[]={8,9,4,56,9,45};
    int max = arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        printf("Maximum is %d\n", max);
    }
}