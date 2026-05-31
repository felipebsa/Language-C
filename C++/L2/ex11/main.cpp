#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 10; 
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int& c : v) {
        if (c < 0) {
            c = 0;
        }
        cout << c << endl;
    }
    return 0;
}
