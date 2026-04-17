#include <stdio.h>

int main()
{
    float weight, height, IMC;
    printf("escreva o peso: ");
    scanf("%f", &weight);
    printf("escreva a altura: ");
    scanf("%f", &height);
    IMC = weight / (height * height);
    if (IMC >= 30) {
        printf("obeso");
    }
    else if (IMC >= 25){
        printf("sobrepeso");
    }
    else if (IMC >= 18.5) {
        printf("normal");
    }
    else {
        printf("abaixo do peso");
    }
    printf("\nIMC == %1.f", IMC);
    return 0;
}   
