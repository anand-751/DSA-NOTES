#include <iostream>
using namespace std;

int SearchArray(int arr[], int n, int key) {
    int result = -1;
    int l=0;
    int u=n-1; 
    while(l<=u){
        int mid = (l+u)/2;
        if (arr[mid] = key){
            result = mid;
            break;
        }
        else if (arr[mid]>key){
            u = mid -1;
        }
        if (arr[mid]<key){
            l = mid + 1;
        }
    }
    return result;
    
}

int main() {

const int n = 10;

int arr[n] = {5, 20, 65, 94, 120, 186, 194, 251, 286, 299};
cout << "Entered values:"<< endl;
    
        for (int i = 0; i < n; i++) {
        cout << "arr[" << i <<"]=" << arr[i] << " ";
    }

cout << endl << "Enter the value to be searched:";
    int value;
    cin >> value;
    int result = SearchArray(arr, n, value);
    if (result < 0) {
        cout << "Not Found!\n" << endl;
    }
    else {
        cout << "Value found at array index = " << result;
    }

    return 0;
}