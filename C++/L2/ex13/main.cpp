/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex13.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 20 letras em um vetor. Ler uma letra e contar quantas vezes ela aparece.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20, sum = 0;
    char w;
    vector<char> v(n);
    cin >> w;

    for (int i = 0; i < n; i++) cin >> v[i];
    for (char c : v) {
        if (c == w) sum++;
    }
    cout << sum;
    return 0;
}
