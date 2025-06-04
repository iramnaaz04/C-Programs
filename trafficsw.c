//Traffic 
#include <stdio.h>
void main(){
    char signal;
    printf("Enter traffic light signal ( R=Red, Y=Yellow, G=Green): ");
    scanf("%c", &signal);

    switch(signal){
        case 'R':
        printf("Red Light, Stop!");
        break;
        case 'Y':
        printf("Be ready!");
        break;
        case 'G':
        printf("Go! ");
        break;
        default:
        printf("Enter valid choice!\n");
        printf("Invalid choice");
    }
}