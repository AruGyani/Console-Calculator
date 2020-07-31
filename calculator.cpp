#include <iostream>

using namespace std;

double val1, val2, total;
char valOperator;

void checkCalc() {
    cout << "Operator (+, -, *, /): ", cin >> valOperator;

    switch(valOperator) {
        case '+':
            total = val1+val2;
            break;
        case '-':
            total = val1-val2;
            break;
        case '*':
            total = val1*val2;
            break;
        case '/':
            total = val1/val2;
            break;
        default:
            cout << "\nUnknown operator. Please enter a known operator.\n" << endl;
            checkCalc();
    }
}

void run() {
    cout << "\nValue 1: ", cin >> val1; cout << "Value 2: ", cin >> val2;
   
    checkCalc();

    cout << "\n" << val1 << " " << valOperator << " " << val2 << " = " << total << "\n" << endl;
    char again; cout << "More calulations? (y, n): ", cin >> again; 
    if(again == 'y') run(); 
    else exit(0);
}

int main() {  
    cout << "+------------------------+" << endl;
    cout << "+ Calculator - Aru Gyani +" << endl; 
    cout << "+------------------------+" << endl;

    run();

    return 0;
}