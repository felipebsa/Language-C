/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 06ex.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler vários números até que a soma desses números 
* seja maior que 100. Exibir a multiplicação dos números lidos.
*/

#include <iostream>
using namespace std;

int main() {
    int num, soma = 0, multi = 1;
    while (true) {
        cout << "escreva seu numero: ";
        cin >> num;
        soma += num;
        if (soma > 100) {break;}
        multi *= num;
    }
    cout << "resultado da mutiplicacao: " << multi;
    return 0;
}