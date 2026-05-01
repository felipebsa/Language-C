/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 05ex_fixed.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler um número para a parada final e outro número que representa um múltiplo.
* Exibir os múltiplos do número lido de 1 até o número final lido.
*/

#include <iostream>
using namespace std;

int main() {
    int limit, mult;

    cout << "Enter the multiple base: ";
    cin >> mult;

    cout << "Enter the stop number: ";
    cin >> limit;

    cout << "Multiples of " << mult << " from 1 to " << limit << ": " << endl;

    for (int i = 1; i <= limit; i++) {
        if (i % mult == 0) {
            cout << i << "  ";
        }
    }

    cout << endl;
    return 0;
}