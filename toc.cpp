#include <iostream>
#include <string>
using namespace std;

bool hasTwoConsecutiveZeros(const string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '0') {
            count++;
            if (count == 2) {
                return true;
            }
        } else {
            count = 0;
        }
    }
    return false;
}

int main() {
    string input;
    cout << "Enter a binary string: ";
    cin >> input;

    if (hasTwoConsecutiveZeros(input)) {
        cout << "YES, the string contains two consecutive 0's." << endl;
    } else {
        cout << "NO, the string does not have two consecutive 0's." << endl;
    }

    return 0;
}
