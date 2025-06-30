#include <stdio.h>

void printNatural(int n) {
    if(n == 0)
        return;
    printNatural(n - 1);  // Go to the beginning (1)
    printf("%d ", n);     // Print while returning
}

int main() {
    int no;
    printf("Enter no: ");
    scanf("%d", &no);
    printf("Natural numbers are: ");
    printNatural(no);
    return 0;
}
