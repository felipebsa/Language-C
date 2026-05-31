#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int vogal(string w) {
    int sum = 0;
    for (char c : w) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            sum++;
        }
    }
    return sum;
}

int consoante(string w) {
    int sum = 0;
    for (char c : w) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            continue;
        }
        else {
            sum++;
        }
    }
    return sum;

}

int main() {
    string w;
    cin >> w;
    cout << vogal(w) << endl;
    cout << consoante(w);
    return 0;
}
