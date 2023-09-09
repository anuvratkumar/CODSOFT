#include <iostream>

using namespace std;

int main() {

    cout<<"\n\t\t-------------Try This SIMPLE CALCULATOR For Your Calculation---------------\n"<<endl;
    cout<<"\n\t\t------>>> Have a nice Day!"<<endl<<endl<<endl;

    double num1, num2;
    char operation;
    
    cout << "-->Enter the first number: ";
    cin >> num1;
    cout<<endl;
    
    cout << "-->Enter the second number: ";
    cin >> num2;
    cout<<endl;

    
    cout << "-->Choose an operation (+, -, *, /): ";
    cin >> operation;
    cout<<endl;

    double result;

    
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1; 
    }

    
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}
