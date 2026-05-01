/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 08ex.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler um número. Exiba a soma 
* de todos os números pares e ímpares de zero até o número lido.
*/

#include <iostream>
using namespace std;

int main() {
    int n, somaim = 0, somapr = 0;
    
    cout << "numero limitador: ";
    cin >> n;
    
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            somapr += i;
        }
        else {
            somaim += i;
        }
    }
    cout << "soma dos pares: " << somapr << endl;
    cout << "soma dos impares: " << somaim;
    return 0;
}