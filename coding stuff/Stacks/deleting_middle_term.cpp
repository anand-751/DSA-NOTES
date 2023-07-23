#include <iostream>
#include <cstring>
#include <stack>
using namespace std;


void solve(stack<int>& st, int count, int size){
    if (count == size/2)
    {
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();

    //recursion call
    solve(st, count+1, size);    

    st.push(num);
}

void deleteMiddle(stack<int>& st, int N){
    int count = 0;
    solve(st, count,N);
}


int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    while (!st.empty()) 
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<endl;

    deleteMiddle(st,6);

    cout<<"updated stack : ";
    while (!st.empty()) 
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}