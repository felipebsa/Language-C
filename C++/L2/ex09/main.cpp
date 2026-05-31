/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex09.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler uma palavra. Substituir todas as vogais por '*'.
* Criar uma função para realizar a substituição.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void substring() {
    string w;
    cin >> w;
    for (char& c : w) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            c = '*';
        }
    }
    cout << w;
}

int main() {
    substring();
    return 0;
}
