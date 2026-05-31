#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void circle() {
    vector<float> r(5);
    vector<float> result(5);
    for (int i=0; i < 5; i++) {
        cin >> r[i];
        result[i] = 3.1415926 * (r[i]*r[i]);
    }
    for (int i=0; i < 5; i++) {
        cout << result[i] << endl;
    }
}
int main() {
    circle();
    return 0;
}
