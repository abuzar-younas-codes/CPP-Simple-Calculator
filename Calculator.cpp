#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;
    bool keepRunning = true; // Program ko chalte rakhne ke liye

    cout << "--- My Simple C++ Calculator ---" << endl;

    while (keepRunning) {
        // 1. Operator input lein
        cout << "\nEnter operator (+, -, *, /) or 'x' to exit: ";
        cin >> operation;

        // Agar user 'x' dabaye to program band kar dein
        if (operation == 'x') {
            keepRunning = false;
            continue; 
        }

        // 2. Numbers input lein
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // 3. Calculation logic
        switch(operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;

            case '/':
                if(num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is not possible." << endl;
                break;

            default:
                cout << "Error! Invalid operator. Please try again." << endl;
                break;
        }
        
        cout << "-----------------------------" << endl;
    }

    cout << "Calculator closed. Good Buy!" << endl;
    return 0;
}
