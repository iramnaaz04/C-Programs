// Reverse string using pointer
#include <stdio.h>
#include <string.h>

int mystrrev(char *a){
    int i = strlen(a) - 1;;
    while (i > *a)
    {
        i--;
        printf("%c", *(a+i));
    }
}
int main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Reversed string: ");
    mystrrev(str);
    printf("\n");
}