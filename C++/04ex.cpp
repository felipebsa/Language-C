/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 04ex.cpp
* Data: 26/04/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler 10 números. Verificar e exibir o menor 
* e maior número dessa sequência.
*/


#include <iostream>
using namespace std;

int main() {
    int num, maior, menor;
    for (int i = 0; i < 10; i++) {
        cout << "escreva um numero: " << "loop [" << i + 1 << "]" << endl;
        cin >> num;
        if (i == 0) {
            maior = num;
            menor = num;
        }
        else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }
    cout << "maior numero = " << maior << endl;
    cout << "menor numero = " << menor << endl;
        
    

    return 0;
}