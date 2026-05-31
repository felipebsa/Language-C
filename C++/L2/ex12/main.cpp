/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex12.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 15 números em um vetor. Contar e exibir a quantidade de pares e de ímpares.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 15;
    int sumI = 0, sumP = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int c : v) {
        if (c % 2 == 0) sumP++;
        else sumI++;
    }
    cout << sumI << " " << sumP;
    return 0;
}
