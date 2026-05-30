#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int sum() {
    int n1, n2, sum = 0;
    cin >> n1;
    cin >> n2;
    sum = n1 + n2;
    cout << sum << endl;
    return 0;
}

int sub() {
    int n1, n2, sub = 0;
    cin >> n1;
    cin >> n2;
    sub = n1 - n2;
    cout << sub << endl;
    return 0;
}

int multi() {
    int n1, n2, multi = 0;
    cin >> n1;
    cin >> n2;
    multi = n1 * n2;
    cout << multi << endl;
    return 0;
}

int div() {
    int n1, n2, div = 0;
    cin >> n1;
    cin >> n2;
    div = n1 / n2;
    cout << div << endl;
    return 0;
}

int main() {
    char choice;
    bool power = true;
    cout << "---- Calculator ----" << endl;
        cout << "Calculator" << endl << "choice [+] [-] [*] [/] or [exit]" << endl;
        cin >> choice;
        if (choice == '+') {
            sum();
        }
        else if (choice == '-') {
            sub();
        }
        else if (choice == '*') {
            multi();
        }
        else if (choice == '/') {
            div();
        }
        else {
            return 0;
        }
}
