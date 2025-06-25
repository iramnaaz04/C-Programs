//power using while loop
#include <stdio.h>
void main(){
    int num,power,n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);
    n = 1;
    while(power != 0){
        n = n * num;
        power--;
    }
    printf("%d raised to the power %d is %d\n", num, power, n);
}

// #include <stdio.h>
// void main(){
//     int num,power,n,ans=1;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     printf("Enter the power: ");
//     scanf("%d", &power);
//     n = 1;
//     while(n<=power){
//         ans = ans * num;
//         n++;
//     }
//     printf("%d raised to %d is %d\n", num, power, ans);
// }
