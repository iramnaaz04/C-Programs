// 2-10 table using while loop
#include <stdio.h>
void main(){
    int i,no=2;
    while (no <= 10){
        i=1;
        while (i<=10)
        {
            printf("%d\n",i*no);
            i++;
        }
    no++;
    printf("\n");
    }
}
