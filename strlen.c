// String length 
#include <stdio.h>
#include <string.h>
void main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
    printf("String is: %s\n", str);
    printf("String in reverse: ", strrev(str));
    strrev(str);
    printf("%s", str);
    printf("\n");
    char copy[20];
    printf("String copy: ",strcpy(copy,str));
    printf("Copied string is: %s\n", copy);
    int i = strcmp(str, copy);
    if(i == 0) {
        printf("Strings are equal\n");
    }
    else {
        printf("Strings are not equal\n");
    }
    printf("String compare: %d\n", i);

    printf("String concatenation: %s\n", strcat(str, copy));
    printf("Concatenated string is: %s\n", str);
}