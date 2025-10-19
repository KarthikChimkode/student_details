#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"


Student* addStudent(Student* head, int id, const char* name, float gpa){
    Student8 newStudent = (Student*)malloc(sizeof(Student));
    if (!newStudent){
        printf("Memory allocation failed.\n");
        return head
    }
    newStudent->id=id;
    strcpy(newStudent->name, name);
    newStudent->gpa = gpa;
    newStudent->next = head
    return newStudent;
}


void viewStudents(Student* head) {
    printf("\n-- Student List --\n");
}