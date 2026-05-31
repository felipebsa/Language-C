/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex07.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 5 números. Verificar se estão em ordem crescente,
* em ordem decrescente ou não ordenados.
* Criar uma função para essa análise.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void order() {
    vector<int> n(5);
    bool c = true, d = true;
    for (int i = 0; i < 5; i++) cin >> n[i];
    for (int i = 0; i < 4; i++) {
        if (n[i] > n[i+1]) c = false;
        else d = false;
    }
    if (c) cout << "crescente";
    else if (d) cout << "descrescente";
    else cout << "nao ordenado";
}

int main() {
    order();
    return 0;
}
