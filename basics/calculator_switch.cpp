// Four-function calculator with switch.

// calculator using switch case
#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /,% : ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        
        case '%':
            if(num2 != 0)
                cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2 << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;

        default:
            cout << "Error! operator is not correct" << endl;
            break;
    }
}