/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: ex03.cpp
* Data: 01/06/2026
* Autor: Felipe Barbosa Santos
* Descrição:
* Ler o sexo e a altura. Calcular o peso ideal.
* Masculino: 72.7 * altura - 58 | Feminino: 62.1 * altura - 44.7
* Criar uma função para cada caso.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

float masc(float high) {
    return 72.7 * high - 58;
}

float fem(float high) {
    return 62.1 * high - 44.7;
}

int main() {
    string sex;
    float high;
    cin >> sex >> high;
    if (sex == "Masculino") {
        cout << masc(high);
    }
    else if (sex == "Feminino") {
        cout << fem(high);
    }
    else {
        cout << "write Feminino or Masculino";
    }
    return 0;
}
