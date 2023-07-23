#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>& s, int x){
    if (s.empty())
    {
        s.push(x);
        return;
    }
    else{
        int num = s.top();
        s.pop();

        solve(s, x);

        s.push(num);
    }
    
}

stack<int> pushBottom( stack<int>& Mystack , int x){
    solve(Mystack, x);
    return Mystack;
}

int main(){

   stack<int> myStack;

    // Pushing elements into the stack
    myStack.push(3);
    myStack.push(7);
    myStack.push(1);

    int x = 5;
    
    cout << "Stack before adding " << x << " at the bottom: ";
    stack<int> tempStack = myStack;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }

    cout << endl;

    // Rebuild the stack with the new element added at the bottom
    myStack = pushBottom(myStack, x);

    cout << "Stack after adding " << x << " at the bottom: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    cout << endl;
    
    return 0;
}