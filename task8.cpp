#include <iostream>
using namespace std;

int sumDigits(int n) {
    int sum = 0;
    if (n < 0)
    n = -n;
    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

bool isDivisibleBy3(int n) {
    return sumDigits(n) % 3 == 0;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Sum of digits: " << sumDigits(num) << endl;

    if (isDivisibleBy3(num))
        cout << "Divisible by 3" << endl;
    else
        cout << "Not divisible by 3" << endl;

    return 0;
}
