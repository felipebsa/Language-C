#include <stdio.h>

void dup(int *x);

int main() {
    int num;
    printf("write to a number: ");
    scanf("%d", &num);
    dup(&num);
    printf("\nnumber after being duplicated: %d", num);
    return 0;
}

void dup(int *x) {
    *x = *x * 2;
}