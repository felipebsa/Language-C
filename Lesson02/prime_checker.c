#include <stdio.h>

int main()
{
    int N, cont;
    cont = 1;
    printf("write your number: ");
    scanf("%d", &N);
    for (int i=1; i <= N/2; i++) {
        if (N % i == 0) {
            cont++;
        }
    }
    if (cont == 2) {
        printf("your number is prime");
    }
    else {
        printf("your number is not prime");
    }
    return 0;
}