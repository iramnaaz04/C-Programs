// prt++ means increase the pointer by one datatype
#include <stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);
    printf("\n");
    float price = 100.00;
    float *poi = &price;
    printf("ptr = %u\n",poi);
    poi++;
    printf("ptr = %u\n",poi);
    poi--;
    printf("ptr = %u\n",poi);

    return 0;
}