#include<iostream>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){;
        return true;
    }
    return false;
}
bool ratinMaze(int** arr, int x, int y, int n, int **solArr){

    if(x==n-1 && y==n-1){                                   // base condition
        solArr[x][y]=1;
        return true;
    }

    if (isSafe(arr,x,y,n)){
        solArr[x][y]=1; 

        if(ratinMaze(arr,x+1,y,n,solArr)){
            return true;
        }   
        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }   
        solArr[x][y]=0;                             // backtrack to previous position
        return false;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int** arr=new int*[n];                          // allocating memory for array1
    for (int i = 0; i < n; i++){
        arr[i]=new int[n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){                // for input of arrays
            cin>>arr[i][j];
        }
    }
    
    int** solArr=new int*[n];                        // allocating memory for solution array
    for (int i = 0; i < n; i++){
        solArr[i]=new int[n];
        for (int j = 0; j < n; j++){
            solArr[i][j]=0;                          // firstly filling up zeros in the solution array
        }
    }
    cout<<endl;
    if(ratinMaze(arr,0, 0, n,solArr)){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}



 