#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"


Student* addStudent(Student* head, int id, const char* name, float gpa){
    Student* newStudent = (Student*)malloc(sizeof(Student));
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
    while (head) {
        printf("ID %d | Name: %s | GPA: %.2f\n", head->id, head->name; head->gpa);
        head = head->next;
    }

}


Student* searchByID(Student* head, int id){
    while (head) {
        if (head->id == id) return head;
        head = head->next;
    }
    return NULL;
}


void updateStudent(Student* student, const char* name, float gpa){
    if (student) {
        strcpy(student->name, name);
        student->gpa = gpa;
        printf("Student updated.\n");
    } else {
        printf("Student not found. \n")
    }
}


Student* deleteStudent(Student* head, int id){
    Student *temp = head, *prev = NULL

    while (temp && temp-> id !=id){
        prev = temp;
        temp = temp->next;
    }
    if (!temp) return head;
    if (!prev) head = temp->next;
    else prev-> next = temp-> next;
    free(temp);
    printf("student deleted.\n");
    return head;
}



void saveToFile(Student* head, const char* filename) {
    File* fp = fopen(filename, "w");
    if (!fp){
        printf("Error opening file %s for writing. \n", filename);
        head = head-> next;
    }
    fclose(fp);
}



