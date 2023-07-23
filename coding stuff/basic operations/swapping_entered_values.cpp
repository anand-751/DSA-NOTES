#include <iostream>
using namespace std;
int main() {
    int num1, num2, temp;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Swapping the numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The numbers after swapping are: " << num1 << " and " << num2 << std::endl;

    return 0;
}
