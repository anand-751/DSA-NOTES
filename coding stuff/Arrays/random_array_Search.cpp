#include<iostream>

using namespace std;

int SearchArray(int arr[], int n, int key) {

    int result = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << endl << "Value found at array index = " << i;
            result = i;
        }
    }
    return result;

}

int main() {
    const int n = 100;
    int arr[n];
    cout << "Given " << n << " array values:";
    for (int i = 0; i < n; i++) {
        int temp = rand()%10;                                               // getting random numbers in the array which should be under 10.
        arr[i] = temp;
        cout << "arr[" << i <<"]=" << arr[i] << " ";
    }
    cout<<endl;
    cout << "Enter the value to be searched:";
    int value;
    cin >> value;
    int result = SearchArray(arr, n, value);
    if (result < 0) {
        cout << "Not Found!\n" << endl;
    }
    else {
       // cout << "Value found at array index = " << result;
    }

    return 0;
}