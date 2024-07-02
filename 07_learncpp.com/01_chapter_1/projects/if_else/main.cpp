#include <iostream>
using namespace std;

int main() {
    bool condition = false;

    if (condition) {
        cout << "Condition is true" << endl;
    } else {
        cout << "Condition is false" << endl;
    }

    int number = 13;
    if (number < 12) {
        cout << "Number is less than 12" << endl;
    } else if (number == 12) {
        cout << "Number is equal to 12" << endl;
    } else {
        cout << "Number is greater than 12" << endl;
    }

    int a;
    int b;

    cout << "Please enter first number " << endl;
    cin >> a;

    cout << "Please enter second number " << endl;
    cin >> b;

    if (a > b) {
        cout << "a value is greater than b " << endl;
    } else if (a == b) {
        cout << "a and b values are equal" << endl;
    } else {
        cout << "a value is smaller than b" << endl;
    }

    return 0;
}
