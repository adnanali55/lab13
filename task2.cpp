#include <iostream>
using namespace std;
int maxNumber(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}



int main() {
    cout << maxNumber(10, 25) << endl;
    return 0;
}
