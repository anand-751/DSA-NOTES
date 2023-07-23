#include <iostream>
using namespace std; 

int maxConsecutiveSum(int arr[], int n) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        if (currentSum < 0) {
            currentSum = arr[i];
        } else {
            currentSum += arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {2, -3, 5, -1, 7, -2, 5, -3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxConsecutiveSum(arr, n);
    cout<<maxSum;

    return 0;
}
