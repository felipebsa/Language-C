#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 20; 
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> v[i];
    
    for (int i = 0; i < n; i++) {
        if(v[i] < 0) {cout << i; break;}
    }
    return 0;
}
