// Celcius to Farhenheit and Farhenheit to Celcius
#include <stdio.h>
int main(){
    int choice;
    float temp;
    do{
        printf("\n1.Celcius to Farhenheit\n2.Farhenheit to Celcius\n3.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter Celcius: ");
            scanf("%f", &temp);
            printf("Farhenheit is %f\n",(temp*9/5)+32);
            break;

            case 2:
            printf("Enter Farhenheit: ");
            scanf("%f", &temp);
            printf("Celcius is %f\n",(temp-32)*5/9);
            break;

            case 3:
            printf("Exit");
            break;

            default:
            printf("Enter valid input!");
        }
    }
        while(choice!=3);
        return 0;
}