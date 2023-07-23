#include <iostream>  
using namespace std;
   
int main()  
{  
    //Initialize array   
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};   
      
    //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
      
    cout<<"Duplicate elements in given array: "<<endl;  
    
    //Searches for duplicate element  
    for(int i = 0; i < length; i++) {  
        for(int j = i + 1; j < length; j++) {  
            if(arr[i] == arr[j])  
                cout<<arr[j]<<endl;  
        }  
    }  
    return 0;  
}  