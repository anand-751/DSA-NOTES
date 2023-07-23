#include<iostream>
using namespace std;

void removeDuplicates(int arr[], int n) {
    int i, j, k;

    for (i = 0; i < n; i++) {
        if (arr[i] == -1) continue; // Skip already deleted elements

        for (j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                arr[j] = -1; // Mark duplicate elements as -1
            }
        }
    }

    // Shift non-duplicate elements to the left
    k = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != -1) {
            arr[k++] = arr[i];
        }
    }

    // Fill remaining elements with -1
    for (; k < n; k++) {
        arr[k] = -1;
    }cout<<endl;
}

int main() {
    int arr[] = {1,1,1,2,2,3,4,5,6,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ,";
    }

    removeDuplicates(arr, n);

    cout<<("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ,";
    }

    return 0;
}
