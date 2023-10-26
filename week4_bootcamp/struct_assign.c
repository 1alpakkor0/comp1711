#include <stdio.h>
#include <string.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    char mark [10];
};

int main () {
    struct student new_student;
    strcpy(new_student.name, "Alp Akkor");
    strcpy(new_student.student_id, "sc23a2a");
    strcpy(new_student.mark, "35");
    // we can define mark as an integer
    // new_student.mark = 35;

    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %s\n", new_student.mark);
    return 0;
}