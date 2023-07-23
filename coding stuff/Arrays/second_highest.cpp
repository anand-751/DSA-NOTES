#include<iostream>
using namespace std;

// here max 2 is the second highest number of an array...
/*int second_highest(int arr[], int size){

    int max1, max2;

    if (arr[0]>arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }else {
        max1 = arr[1];
        max2 = arr[0];
    }
    
    for (int i = 2; i < size; i++)
    {
        if (arr[i] > max1)
        {   
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i]>max2 && arr[i]<max1)
        {
            arr[i] = max2;
        }    
    }
    return max2;
}



int main(){
    int arr[] = {-1,-6,-5,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int secondLast = arr[size - 2];
    cout<<"The Second Highest Number Is : "<<endl;
   // int result = second_highest(arr, 7);
    
    quickSort(arr,0,3);
    
    cout<< secondLast <<endl;
    

    return 0;
}*/

/*there can be another approach as well...
1) first we can sort the array
2) then print the second last number of the array
*/ 

//METHOD 2.....
void swap(int arr[], int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[],int l, int r){
    
    int pivot = arr[r];
    int i = l-1;

    for (int j = l; j < r; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quickSort(int arr[], int l, int r){

    if (l<r)
    {
        int pi = partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
        
    }
    
}

int main(){
    
    int arr[] = {5,9,8,3,6,10,4,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,9);
    int secondLast = arr[n - 2];

    
    cout<<secondLast<<endl;

    return 0;

}