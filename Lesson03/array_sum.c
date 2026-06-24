#include <stdio.h>

int main()
{
    int numeros[5];
    float soma = 0;
    for (int i=0; i < 5; i++) {
        printf("digite o numero da posicao %d: \n", i);
        scanf("\n%d", &numeros[i]);
    }
    for (int i=0; i < 5; i++) {
        soma += numeros[i];
    }
    printf("%.2f\n", soma/5);
    return 0;
}
