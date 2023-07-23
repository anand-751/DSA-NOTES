#include<iostream>
using namespace std;

int SearchArray(int arr[], int n, int key){
   
    for(int i=0; i<n; i++){
        if(arr[i]==key){
           return i;
        }
    }
    cout<<"INVALID_INPUT!\n"<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

cout<<SearchArray(arr,n,key)<<endl;

    return 0;
}