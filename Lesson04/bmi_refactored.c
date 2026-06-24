#include <stdio.h>

float calculator(float weight, float height) {
    float IMC;
    IMC = weight / (height * height);
    return IMC;
}
void classify(float IMC) {
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
    printf("\nIMC == %.2f", IMC);
}

int main()
{
    float IMC, weight, height;
    printf("escreva o peso: ");
    scanf("%f", &weight);
    printf("escreva a altura: ");
    scanf("%f", &height);

    IMC = calculator(weight, height);
    classify(IMC);
    return 0;
}   
