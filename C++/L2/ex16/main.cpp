/*
* Instituição: EtecVAWV- Vasco Antonio Vechiarutti
*
* Arquivo: ex16.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 15 números em um vetor. Exibir o índice do menor valor e do maior valor.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 15, more, less;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) { more = v[i]; less = v[i]; }
        if (more < v[i]) more = v[i];
        if (less > v[i]) less = v[i];
    }
    for (int i = 0; i < n; i++) {
        if (more == v[i]) { cout << "big is indice [" << i << "]" << endl; break; }
    }
    for (int i = 0; i < n; i++) {
        if (less == v[i]) { cout << "small is indice [" << i << "]"; break; }
    }
    return 0;
}
