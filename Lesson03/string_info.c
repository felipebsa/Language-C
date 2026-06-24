#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int age, strchar;

    fgets(name, 100, stdin);
    scanf("%d", &age);

    name[strlen(name)-1] = '\0';
    strchar = strlen(name);
    
    printf("hello! %s your age is %d and your name have %d chars", name, age, strchar);
    return 0;
}