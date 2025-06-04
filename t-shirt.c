/* Q8]Accept price of t-shirt and calculate Net price as......
A] If price>=500 then discount will be 15%
B] If price>=800 then discount will be 20%
C] If price>=1000 then discount will be 25%
*/
#include <stdio.h>
void main(){
    float price;
    printf("Enter price of t-shirt: ");
    scanf("%f", &price);
    if(price >=500){
        printf("Discount is 15%\n");
        price = price - (price * 0.15);
    }
    else if(price >= 800){
        printf("Discount is 20%\n");
        price = price - (price * 0.20);
    }
    else (price >= 1000);{
        printf("Discount will be 25%/n");
        price = price - (price * 0.25);
    }
}