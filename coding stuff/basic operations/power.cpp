#include <iostream>
using namespace std;

int Power(int n, int p) {
    if (p == 0) {
        return 1;
    } else if (p < 0) {
        cout << "Enter a positive power" << endl;
        return 0;
    }

    int prevPower = Power(n, p - 1);
    return n * prevPower;
}

int main() {
    int n, p;
    cin >> n >> p;

    cout << Power(n, p) << endl;

    return 0;
}