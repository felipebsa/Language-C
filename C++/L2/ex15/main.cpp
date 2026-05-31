/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex15.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 20 números em um vetor. Exibir o índice do primeiro número negativo.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        if (v[i] < 0) { cout << i; break; }
    }
    return 0;
}
