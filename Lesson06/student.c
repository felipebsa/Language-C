#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

int main() {
    Student s1;
    
    printf("Enter name: ");
    fgets(s1.name, 50, stdin);
    s1.name[strlen(s1.name)-1] = '\0';
    
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    printf("Enter grade: ");
    scanf("%f", &s1.grade);
    
    printf("\nName: %s | Age: %d | Grade: %.2f", s1.name, s1.age, s1.grade);
    return 0;
}