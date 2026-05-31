#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 15; 
    int sumI = 0, sumP = 0;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> v[i];
    
    for (int c : v) {
        if (c % 2 == 0) sumP++;
        else sumI++;
    }
    cout << sumI << " " << sumP;
    return 0;
}
