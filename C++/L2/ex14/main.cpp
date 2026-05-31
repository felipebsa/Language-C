/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex14.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 10 nomes em um vetor. Ordenar em ordem decrescente e exibir em ordem crescente.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10;
    vector<string> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = n-1; i >= 0; i--) {
        cout << v[i] << endl;
    }
    return 0;
}
