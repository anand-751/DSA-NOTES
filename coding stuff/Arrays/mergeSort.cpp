#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){

    int n1=mid-l+1;
    int n2=r-mid;
    
    int a[n1];
    int b[n2];      //temp arrays 

    for(int i=0; i<n1; i++) {
        a[i]=arr[l+i];
    }                                 //copying the data to temp arrays
    for(int j=0; j<n2; j++) {
        b[j]=arr[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2) {

        if(a[i]<b[j]) {
            arr[k]=a[i];
            i++;
        }
        else {
            arr[k]=b[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }



}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    
    int arr[] = {6,3,9,5,2,8,7,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "original element of the array :" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n elements in sorted order in the array:" << endl;
    int l;
    int r;

    mergeSort(arr,0,n-1);


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
 
}