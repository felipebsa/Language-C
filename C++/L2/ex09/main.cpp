#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void substring() {
    string w;
    cin >> w;
    for (char& c : w) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
            c = '*';
        }
    }
    cout << w;
}
int main() {
    substring();
    return 0;
}
