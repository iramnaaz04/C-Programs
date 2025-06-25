// Pointer
#include <stdio.h>
void main(){
    int no = 45, *n;
    n = &no; // Assigning address of no to pointer n
    printf("Value of no is: %d\n", no);
    printf("Address of no is: %u\n", &no);
    printf("Value of n is: %u\n", *n); // Dereferencing pointer n to get value
    printf("Value at n is: %d", *n); // Dereferencing pointer n to get value
}