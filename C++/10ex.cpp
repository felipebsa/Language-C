/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 10ex.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Simule um jogo de adivinhação. O programa deve gerar um número aleatório 
* e o jogador precisa acertar o número. 
* Cada vez que o jogador informar o número, deve exibir se o 
* palpite é muito alto, muito baixo ou correto. Quando for correto, 
* exibir a quantidade de palpites.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

/*
Programa: Jogo de adivinhação
Objetivo: Sortear um número de 1 a 100 e dar ao jogador 5 tentativas
Autores: Zaion e Leo
*/

int main() {
    srand(time(NULL));

    char opcao = 'S';

    cout << "=== Guessing Game [1 a 100] ===" << endl << endl;

    while (opcao == 'Y') {
        int secretnumber = 1 + (rand() % 100);
        int maxattempts = 6;
        bool correct = false;

        cout << "A number between 1 and 100 was drawn." << endl;
        cout << "you have " << maxattempts << " attemps for to hit." << endl << endl;

        for (int attempt = 1; attempt <= maxattempts; attempt++) {
            int guess;

            cout << "attempt " << attempt << " the " << maxattempts
                 << ". write your guess: ";

            if (!(cin >> guess)) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "write a int number" << endl;
                attempt--;
                continue;
            }

            if (guess == secretnumber) {
                cout << "You Hit! The number is " << secretnumber << "." << endl;
                correct = true;
                break;
            } else if (guess < secretnumber) {
                cout << "Wrong. Hint: a number is BIGGER for " << guess << "." << endl;
            } else {
                cout << "Wrong. Hint: a number is SMALL for " << guess << "." << endl;
            }
        }

        if (!correct) {
            cout << endl
                 << "Your attemps are over you number is:  "
                 << secretnumber << "." << endl;
        }

        cout << endl << "want to play again? (Y/N): ";
        cin >> opcao;

        opcao = toupper(opcao);

        if (opcao != 'Y') {
            cout << endl << "Thanks for playing!" << endl;
        }

        cout << endl << "-----------------------------" << endl << endl;
    }

    return 0;
}