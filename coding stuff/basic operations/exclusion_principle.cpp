#include<iostream>
using namespace std;

// How many numbers are divisible by any "2" given numbers...

int divisible(int n, int a, int b){

    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);
 
    return c1+c2-c3;                     //exclusion principle.... 

}

int main(){

    int n, a, b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b)<<endl;

    return 0;
}

