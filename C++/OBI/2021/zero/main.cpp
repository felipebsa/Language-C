#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, sum = 0, num;
    vector<int> v;
    cin >> N;
    for (int i=0; i < N; i++ ) {
        cin >> num;
        if (num == 0) v.pop_back();
        else v.push_back(num);
    }
    for (int c : v) {
        sum+=c;
    }
    cout << sum;
    return 0;
}