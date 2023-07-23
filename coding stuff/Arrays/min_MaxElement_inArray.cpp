#include <iostream>
using namespace std;

 
   void min_Max(int arr,int n){
   int max = arr[0] , min = arr[0];
   for(int i=1;i<n;i++){
      if(max < arr[i])
         max = arr[i];
      if(min > arr[i])
         min = arr[i];
   } 
   cout<<"Maximum Value: "<<max<<endl;
   cout<<"Minimum Value: "<<min<<endl;

}

int main() {
   int n = 8;
   int arr[];
   cin>>arr[];
   int min_Max(arr, n);
   return 0;
}


