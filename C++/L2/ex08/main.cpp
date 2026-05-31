/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex08.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler o raio de 5 círculos. Calcular e exibir a soma das áreas.
* Criar uma função para calcular a área do círculo.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

float area(float r) {
    return 3.1415926 * (r * r);
}

int main() {
    vector<float> r(5);
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> r[i];
        sum += area(r[i]);
    }
    cout << "soma das areas: " << sum << endl;
    return 0;
}
