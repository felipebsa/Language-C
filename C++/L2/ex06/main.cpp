/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex06.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler um número. Exibir o dia da semana correspondente.
* Criar uma função para essa verificação.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void week() {
    int n;
    cin >> n;
    switch (n) {
        case 1: cout << "Segunda"; break;
        case 2: cout << "Terça"; break;
        case 3: cout << "Quarta"; break;
        case 4: cout << "Quinta"; break;
        case 5: cout << "Sexta"; break;
        case 6: cout << "Sabado"; break;
        case 7: cout << "Domingo"; break;
        default: cout << "1-7";
    }
}

int main() {
    week();
    return 0;
}
