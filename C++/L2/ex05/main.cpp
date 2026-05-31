#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void palin() {
    string word;
    cin >> word;
    string word2 = word;
    reverse(word2.begin(), word2.end());
    if (word == word2) {
        cout << "is palindromo";
    }
    else {
        cout << "not is palindromo";
    }

}
int main() {
    palin();
    return 0;
}
