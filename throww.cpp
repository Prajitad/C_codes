#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num2 == 0) {
        throw "Divide by zero exception";
    }

    try {
        result = num1 / num2;
        cout << "Result: " << result << endl;
    }
    catch (int i) {
        cout << "Error: " << i<< endl;
    }

    return 0;
}
