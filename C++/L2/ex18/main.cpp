#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20; 
    vector<char> v1(n);
    vector<int> v2(5);
    
    for (int i = 0; i < n; i++) cin >> v1[i];
    for (int i = 0; i < 5; i++) v2[i] = 0;
    for (char& c : v1) {
        switch(c) {
            case 'a': v2[0]++; break;
            case 'e': v2[1]++; break;
            case 'i': v2[2]++; break;
            case 'o': v2[3]++; break;
            case 'u': v2[4]++; break;
        }
    }
    string vogais = "aeiou";
    for (int i = 0; i < 5; i++) {
        cout << vogais[i] << ": " << v2[i] << endl;
    }
    return 0;
}
