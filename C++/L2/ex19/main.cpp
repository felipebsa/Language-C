#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() { 
    vector<int> vPar;
    vector<int> vImpar;
    vector<int> vOr;
    int num;
    
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num % 2 == 0) vPar.push_back(num);
        else vImpar.push_back(num);
    }
    sort(vPar.begin(), vPar.end());
    sort(vImpar.begin(), vImpar.end());
    int sizeor = min(vPar.size(), vImpar.size());
    for (int i = 0; i < sizeor; i++) {
        vOr.push_back(vPar[i] + vImpar[i]);
    }
    cout << "--- pares ---" << endl;
    for (int c : vPar) cout << c << endl;
    cout << "--- impares ---" << endl;
    for (int c : vImpar) cout << c << endl;
    cout << "--- soma ---" << endl;
    for (int c : vOr) cout << c << endl;
    
    return 0;
}
