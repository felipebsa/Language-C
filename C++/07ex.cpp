/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 07ex_fixed.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler a quantidade de pessoas e ler a altura dessas pessoas.
* Calcular e exibir a altura média de todas as pessoas.
*/

#include <iostream>
using namespace std;

int main() {
    int peo;
    float height, sum = 0.0f; // initialized to 0 — this was the bug

    cout << "Number of people: ";
    cin >> peo;

    for (int i = 0; i < peo; i++) {
        cout << "Height of person " << i + 1 << ": ";
        cin >> height;
        sum += height;
    }

    cout << "Average height: " << sum / peo << endl;
    return 0;
}