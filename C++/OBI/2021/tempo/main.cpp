#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/* 2 hours to make */

int main() {
    int tempoRecebido[100], somaResposta[100], N, X, tempoAtual = 0, intervalo = 1;
    char C;
    int enviadas[100] = {0};
    int respondidas[100] = {0};
    vector<int> amigos;
    for (int i=0; i < 100; i++) {
        tempoRecebido[i] = 0;
        somaResposta[i] = 0;
    }
    cin >> N;
    for (int i=0; i < N; i++) {
        cin >> C >> X;
        if (C == 'R') {
            tempoAtual += intervalo;
            tempoRecebido[X] = tempoAtual;
            intervalo = 1;
            enviadas[X]++;
        }
        else if (C == 'E') {
            tempoAtual += intervalo;
            somaResposta[X] += tempoAtual - tempoRecebido[X];
            intervalo = 1;
            respondidas[X]++;
        }
        else if (C == 'T') {
            intervalo = X;
        }
    }
    for (int i = 0; i < 100; i++) {
        if (tempoRecebido[i] != 0) {
            amigos.push_back(i); 
        }
    }
    for (int i=0; i < amigos.size(); i++) {
        if (enviadas[amigos[i]] != respondidas[amigos[i]])
            cout << amigos[i] << " " << -1 << endl;
        else
            cout << amigos[i] << " " << somaResposta[amigos[i]] << endl;
    }

    return 0;
}