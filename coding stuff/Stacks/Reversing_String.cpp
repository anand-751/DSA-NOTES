#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

void reverseString(string& str){
    stack<char> s; 

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    
    str = "";

    while (!s.empty())
    {
        char ch = s.top();
        str.push_back(ch);
        s.pop();
    }
    
}

int main(){

    string str = "hello world";
    
    reverseString(str);

    cout<<"Reversed String : "<< str<<endl;

    return 0;
}