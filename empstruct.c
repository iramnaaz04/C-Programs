// Employee structure
#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    float salary;
    char name[20];
};
int main(){
    struct employee emp1,emp2;
    printf("Enter employee 1 id: ");
    scanf("%d", &emp1.id);
    printf("Employee 1 name: ");
    scanf("%s", &emp1.name);
    printf("Employee 1 salary: ");
    scanf("%f", &emp1.salary);

    
    printf("Enter employee 2 id: ");
    scanf("%d", &emp2.id);
    printf("Employee 2 name: ");
    scanf("%s", &emp2.name);
    printf("Employee 2 salary: ");
    scanf("%f", &emp2.salary);
    
    printf("Employee 1 details:\n");
    printf("ID: %d", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);

    printf("Employee 2 details:\n");
    printf("ID: %d\n", emp2.id);
    printf("Name: %s\n", emp2.name);
    printf("Salary: %.2f\n", emp2.salary);
}