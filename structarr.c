// Structure using array to store information of 2 students
#include <stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};

int main(){
    struct student s[2]; // Array for 2 students
    for(int i = 0 ; i < 2 ; i++){
        printf("Enter roll number , Name , Marks for student %d: ", i + 1);
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < 2; i++){
        printf("Roll No: %d , Name: %s , Marks: %f\n " , s[i].rollno , s[i].name , s[i].marks);
    }
    return 0;
}

    
