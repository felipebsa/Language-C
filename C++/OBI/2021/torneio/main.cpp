#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int q = 0;
    char n;
    for (int i=0; i < 6; i++) {
        cin >> n;
        if (n == 'V') q++;
    }
    if (q > 4) cout << 1;
    else if (q > 2) cout << 2;
    else if (q > 0) cout << 3;
    else cout << -1;
    return 0;
}