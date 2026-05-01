/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 10ex_fixed.cpp
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

int main() {
    srand(time(NULL));

    char choice = 'Y'; 

    cout << "=== Guessing Game [1 to 100] ===" << endl << endl;

    while (choice == 'Y') {
        int secretnumber = 1 + (rand() % 100);
        int maxattempts = 6;
        bool correct = false;

        cout << "A number between 1 and 100 was drawn." << endl;
        cout << "You have " << maxattempts << " attempts to guess it." << endl << endl;

        for (int attempt = 1; attempt <= maxattempts; attempt++) {
            int guess;

            cout << "Attempt " << attempt << " of " << maxattempts << ". Your guess: ";

            if (!(cin >> guess)) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Please enter a valid integer." << endl;
                attempt--;
                continue;
            }

            if (guess == secretnumber) {
                cout << "Correct! The number was " << secretnumber
                     << ". You got it in " << attempt << " guess(es)!" << endl;
                correct = true;
                break;
            } else if (guess < secretnumber) {
                cout << "Too low! Try a bigger number." << endl;
            } else {
                cout << "Too high! Try a smaller number." << endl;
            }
        }

        if (!correct) {
            cout << endl << "Out of attempts! The number was: " << secretnumber << "." << endl;
        }

        cout << endl << "Play again? (Y/N): ";
        cin >> choice;
        choice = toupper(choice);

        if (choice != 'Y') {
            cout << endl << "Thanks for playing!" << endl;
        }

        cout << endl << "-----------------------------" << endl << endl;
    }

    return 0;
}