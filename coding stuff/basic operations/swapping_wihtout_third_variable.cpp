#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // swapping the numbers without third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;


    cout << "The numbers after swapping are: " << num1 << " and " << num2 << std::endl;

    return 0;
}