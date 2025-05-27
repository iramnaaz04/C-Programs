//Check if even or odd
#include <stdio.h>
void main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if( number  %  2 == 0){
        printf("%d is even number",number);
    }
    else{
        printf("%d is odd number",number);
    }
}