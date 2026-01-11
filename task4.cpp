#include <iostream>
using namespace std;

void getInput(double &a, double &b) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

int menu() {
    int choice;
    cout << "1 Addition" << endl;
    cout << "2 Subtraction" << endl;
    cout << "3 Multiplication" << endl;
    cout << "4 Division" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    return choice;
}

double calculate(double a, double b, int choice) {
    if (choice == 1) return a + b;
    if (choice == 2) return a - b;
    if (choice == 3) return a * b;
    if (choice == 4) return a / b;
    return 0;
}

int main() {
    double x, y, result;
    int choice;
    getInput(x, y);
    choice = menu();
    result = calculate(x, y, choice);
    cout << "Result: " << result << endl;
    return 0;
}
