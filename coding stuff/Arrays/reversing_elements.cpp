#include<iostream>
using namespace std;

//function for reversing an array using temp variable
void reverseArray(int arr[], int size){
    int start = 0; int end = size-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}
//function to print an array
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    
}
//driver code...
int main(){

    int arr[] = {9,0,1,2,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);

    reverseArray(arr,n);

    cout<<"Reversed array is :- "<<endl;

    printArray(arr,n);

    return 0;

}