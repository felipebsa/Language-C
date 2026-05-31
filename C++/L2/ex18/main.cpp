/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex18.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler 20 letras em um vetor. Contar as vogais (a, e, i, o, u),
* armazenar em um vetor de 5 posições e exibir.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20;
    vector<char> v1(n);
    vector<int> v2(5);

    for (int i = 0; i < n; i++) cin >> v1[i];
    for (int i = 0; i < 5; i++) v2[i] = 0;
    for (char& c : v1) {
        switch(c) {
            case 'a': v2[0]++; break;
            case 'e': v2[1]++; break;
            case 'i': v2[2]++; break;
            case 'o': v2[3]++; break;
            case 'u': v2[4]++; break;
        }
    }
    string vogais = "aeiou";
    for (int i = 0; i < 5; i++) {
        cout << vogais[i] << ": " << v2[i] << endl;
    }
    return 0;
}
