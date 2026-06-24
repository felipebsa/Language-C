#include <stdio.h>

void change(int *a, int *b);

int main() {
    int x = 10, y = 20;
    change(&x, &y);
    printf("x = %d | y = %d", x, y);

    return 0;
}

void change(int *a, int *b) {
    int temp = *a;
    *b = *a;
    *a = temp;
}