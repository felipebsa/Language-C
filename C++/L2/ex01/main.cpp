/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex01.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler um número inteiro. Exibir a soma dos números ímpares até o número lido.
* Criar uma função que retorne verdadeiro para números ímpares.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool impar() {
    int N, sum = 0;
    bool found = false;
    cin >> N;
    for (int i = 0; i < N; i++) {
        if (i % 2 != 0) {
            sum += i;
            found = true;
        }
    }
    if (found) {
        cout << sum;
    }
    else {
        cout << "write a number N > 0";
    }
    return found;
}

int main() {
    impar();
    return 0;
}
