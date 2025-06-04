// Q4]Accept purchase price and sale price of some product and find out whether it is profit or loss of how much amount
#include <stdio.h>
void main(){
    float purchasePrice, salePrice, profit,loss;
    printf("Enter purchase price: ");
    scanf("%f", &purchasePrice);
    printf("Enter sale price: ");
    scanf("%f", &salePrice);

    profit = salePrice - purchasePrice;
    loss = purchasePrice - salePrice;
    if (profit > 0){
        printf("Profit of %f\n",profit);
    }
    else{
        printf("Loss of %f\n",loss);
    }
}