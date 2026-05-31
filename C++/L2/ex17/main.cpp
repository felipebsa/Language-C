/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex17.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 10 números em um vetor. Criar outro vetor com os sinais invertidos.
* Exibir a soma dos valores positivos dos dois vetores.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10, sum1 = 0, sum2 = 0;
    vector<int> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        v2[i] = v1[i] * -1;
    }
    for (int i = 0; i < n; i++) {
        if (v1[i] > 0) sum1 += v1[i];
        if (v2[i] > 0) sum2 += v2[i];
    }
    cout << sum1 + sum2 << endl;
    return 0;
}
