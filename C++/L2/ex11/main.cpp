/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex11.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 10 números em um vetor. Substituir números negativos por zero. Exibir o vetor.
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

    for (int& c : v) {
        if (c < 0) c = 0;
        cout << c << endl;
    }
    return 0;
}
