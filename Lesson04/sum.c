#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b, result;
    scanf("%d", &a);
    scanf("%d", &b);
    result = sum(a, b);
    printf("%d", result);
    return 0;
}