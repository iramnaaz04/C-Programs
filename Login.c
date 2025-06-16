// 3 login attempts
#include <stdio.h>
#include <string.h>
void main(){
    char password[20];
    int attempt = 1;
    do{
        printf("Enter password: ");
        scanf("%s", &password);
        if(strcmp(password, "Avengers-Assemble")==0){
            printf("Login successfull!!\n");
            break;
        }
        attempt++;
    }
    while (attempt<=3);
        if(attempt>3){
            printf("Too many attempts!!, Password incorrect!!\n");
            printf("Please try again later!!");
        }
}