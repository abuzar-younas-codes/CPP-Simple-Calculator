#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "--- Simple C++ Calculator ---" << endl;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero is not possible.";
            break;

        default:
            // Agar user galat operator enter kare
            cout << "Error! Operator is not correct";
            break;
    }

    cout << endl << "-----------------------------" << endl;
    return 0;
}
