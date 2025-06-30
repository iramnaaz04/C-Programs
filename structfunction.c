// Function in structure
#include <stdio.h>
struct Point {
    int x;
    int y;
};
void printPoint(struct Point *p) {
    printf("Point coordinates: (%d, %d)\n", p->x, p->y);
}
int main() {
    struct Point p1;
    p1.x = 10;
    p1.y = 20;

    printPoint(&p1);

    return 0;
}
