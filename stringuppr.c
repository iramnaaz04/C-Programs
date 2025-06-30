// string upper function
#include <stdio.h>
// Function prototype (declare before main)
void mystrupr(char *a);
int main() {
    char arr[100];
    printf("Enter a string: ");
    scanf("%s", arr);
    mystrupr(arr);
    printf("Uppercase string: %s\n", arr);

    return 0;
}
void mystrupr(char *a) {
    int i = 0;
    while (a[i] != '\0') {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 32;
        }
        i++;
    }
}
