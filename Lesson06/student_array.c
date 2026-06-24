#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} Student;

int passed(float grade);

int main() {
    Student s[3];
    for (int i=0; i < 3; i++) {
        printf("Enter name: ");
        fgets(s[i].name, 50, stdin);
        s[i].name[strlen(s[i].name) -1] = '\0';

        printf("Enter age: ");
        scanf("%d", &s[i].age);
        getchar();

        printf("Enter grade: ");
        scanf("%f", &s[i].grade);
        getchar();
    }

    for (int i=0; i < 3; i++) {
        if (passed(s[i].grade)) {
            printf("%s passed!\n", s[i].name);
        }
    }

    return 0;
}

int passed(float grade) {
    if (grade >= 6) {
        return 1;
    }
    return 0;
}