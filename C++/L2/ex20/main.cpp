/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex20.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 10 números em um vetor. Exibir o terceiro menor valor.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[2];
    return 0;
}
