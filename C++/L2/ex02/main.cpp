/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex02.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler a base e o expoente. Calcular a potência usando repetição.
* Criar uma função para o cálculo.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int pon() {
    int B, E, multi = 1;
    cin >> B;
    cin >> E;
    for (int i=0; i<E; i++) {
        multi*=B;
    }
    cout << multi;
    return 0;
}

int main() {
    pon();
    return 0;
}
