// String compare using pointer
#include <stdio.h>
#include <string.h>
int mystrcmp(char *a, char *b);
int main(){
    char arr1[20], arr2[20];
    printf("Enter first string: ");
    scanf("%s", arr1);
    printf("Enter second string: ");
    scanf("%s", &arr2);
    int result = mystrcmp(arr1, arr2);
    if(result == 0){
        printf("Strings are equal\n");
    } else if(result < 0){
        printf("First string is less than second string\n");
    } else {
        printf("First string is greater than second string\n");
    }
}
int mystrcmp(char *a, char *b){
    for(int i = 0; a[i] != '\0' && b[i] != '\0'; i++){
        if(a[i] != b[i]){
            return a[i] - b[i];
        }
    }
    return 0;
}