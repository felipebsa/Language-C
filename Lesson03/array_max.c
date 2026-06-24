#include <stdio.h>

int main() 
{
    int numbers[5], maior;
    for (int i=0; i < 5; i++)
    {
        printf("digite o numero da posicao %d: ", i);
        scanf("%d", &numbers[i]);
    }
    maior = numbers[0];
    for (int i=0; i < 5; i++) 
    {
        if (numbers[i] > maior) 
        {
            maior = numbers[i];
        }
    }
    printf("%d", maior);
    return 0;
}