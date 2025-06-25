// Positive nummber using function
#include <stdio.h>
int checkpositive(int n){
    (n > 0) ? printf("Positive\n") : printf("Negative\n");
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkpositive(num);
    return 0;
}