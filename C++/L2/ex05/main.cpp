/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex05.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler uma palavra. Verificar se é palíndromo.
* Criar uma função que retorne verdadeiro ou falso.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void palin() {
    string word;
    cin >> word;
    string word2 = word;
    reverse(word2.begin(), word2.end());
    if (word == word2) {
        cout << "is palindromo";
    }
    else {
        cout << "not is palindromo";
    }
}

int main() {
    palin();
    return 0;
}
