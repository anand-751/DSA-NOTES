//Merging two unsorted array
#include<iostream>
using namespace std;

void mergeArrays(int a[], int n1, int b[],int n2, int arr3[]) {
int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]){
        arr3[k] = a[i];
        i++;  
        }
        else{
        arr3[k] = b[j];
        j++;
        }
        k++;
    }

    while (i < n1){
        arr3[k] = a[i];
        i++; k++;
    }
    while (j < n2){
        arr3[k] = b[j];
        j++;k++;
    }
    
}

int main(){
    
    int a[] = {3, 9, 10, 18, 23};
    int b[] = {5, 12, 15, 20, 21, 25};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(a[0]);
    
    
    cout<<"The a[] = : ";
    for (int i = 0; i < n1; i++)
    {
        cout<<a[i]<<",";
    }cout<<endl;
    
    cout<<"The b[] = : ";
    for (int i = 0; i < n1; i++)
    {
        cout<<b[i]<<",";
    }cout<<endl;
   
    int arr3[n1+n2];

    

    mergeArrays(a,n1,b,n2,arr3); 

    cout<<"Merged Array: "<<endl;
    for (int i = 0; i < n1 + n2; i++) {
        cout<<arr3[i]<<" ,";
    }
    
    return 0;
}