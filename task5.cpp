#include <iostream>
using namespace std;

void menu() {
    cout << "1 Withdraw" << endl;
    cout << "2 Deposit" << endl;
    cout << "3 Check Balance" << endl;
    cout << "4 Exit" << endl;
}

void withdraw(double &balance) {
    double amount;
    cout << "Enter amount: ";
    cin >> amount;
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrawn" << endl;
    } else {
        cout << "Insufficient balance" << endl;
    }
}

void deposit(double &balance) {
    double amount;
    cout << "Enter amount: ";
    cin >> amount;
    balance += amount;
    cout << "Deposited" << endl;
}

void checkBalance(double balance) {
    cout << "Balance: " << balance << endl;
}

int main() {
    double balance = 1000;
    int choice;
    do {
        menu();
        cin >> choice;
        if (choice == 1) withdraw(balance);
        else if (choice == 2) deposit(balance);
        else if (choice == 3) checkBalance(balance);
    } while (choice != 4);
    return 0;
}
