#ifdef STUDENT_H
#define STUDENT_H

typedef struct  Student{
    int id;
    char name[100]:
    float gpa;
    struct Student* next;
} Student;


// Function prototypes Declarations
Student* addStudent(Student* head, int id, const char* name, float gpa);
void viewStudents(Student* head);

Student* searchById(Student* head, int id);
void updateStudent(Student* student, const char* name, float gpa);

Student* deleteStudent(Student* head, int id);
void saveToFile(Student* head, const char* filename);

Student* loadFromFile(const char* filename);
void sortByName(Student* head);


#endif