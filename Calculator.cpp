#include <iostream>
#include <math.h>
#include <string>
using namespace std;



int main()
{
    int amountOfNumbers;
    cout << "Enter # of numbers you want to use: ";
    cin >> amountOfNumbers;

    switch (amountOfNumbers) {
    default:
        cout << "That is not a valid amount of numbers.\n";
        break;
    case 2:
        double num1;
        double num2;
        char op;
        double result;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator: ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
        case '+':
            result = num1 + num2;
            cout << num1 << "+" << num2 << "=" << result << "\n";
            break;

        case '-':
            result = num1 - num2;
            cout << num1 << "-" << num2 << "=" << result << "\n";
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << "*" << num2 << "=" << result << "\n";
            break;

        case '/':
            result = num1 / num2;
            cout << num1 << "/" << num2 << "=" << result << "\n";
            break;
        }
        break;
    }
    system("pause");
    
}


