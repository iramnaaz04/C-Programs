// Structure pointer using user input
#include <stdio.h>

struct Student{
    int rollno;
    float marks;
};

int main(){
    struct Student s;
    struct Student *ptr = &s; // Pointer to Structure
    printf("Enter Rollno: ");
    scanf("%d", &ptr->rollno);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("Student Details\n");
    printf("Rollno:%d\n", ptr->rollno);
    printf("Marks:%f\n",ptr->marks);

    return 0;
}