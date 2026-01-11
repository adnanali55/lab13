#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int num = 10;
    if (isEven(num)) {
        cout << "Even number";
    } else {
        cout << "Odd number";
    }
    return 0;
}
