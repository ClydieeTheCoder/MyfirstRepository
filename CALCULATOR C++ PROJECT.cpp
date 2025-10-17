#include <iostream>
using namespace std;

int main(){

    double num1, num2, result;
    char op;

    cout << "Enter number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /) ";
    cin >> op;

    cout << "Enter number: ";
    cin >> num2;


    if (op == '+'){
        result = num1 + num2;
        cout << "EQUAL TO: " << result;
    }
    else if (op == '-'){
        result = num1 - num2;
        cout << "EQAUL TO: " << result; 
    }
    else if (op == '*'){
        result = num1 * num2;
        cout << "EQUAL TO: " << result;
    }
    else if (op == '/'){
        result = num1 / num2;
        cout << "EQUAL TO: " << result;
    }
    else
    cout << "INVALID" << endl;

    return 0;
}