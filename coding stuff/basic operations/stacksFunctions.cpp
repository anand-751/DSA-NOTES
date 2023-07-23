#include <iostream>
using namespace std;

#define n 100

class stack{

    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }


    void push(int X){

        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top]=X;
    }

    void pop(){

        if(top==-1){

            cout<<"No element to pop"<<endl;
            return;
        }

        top--;
    }

    int Top(){

        if(top==-1){
            cout<<"No element in the stack"<<endl;
            return -1;
        }    
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};



//dirver code
int main(){

    stack st;
    st.push(1); 
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;


    return 0;
}