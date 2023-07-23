#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

bool isValid(string input){
   
    stack<char> s;
    

    for (int i = 0; i < input.length() ; i++)
    {
        char ch = input[i];

        if (ch == '(' || ch == '[' || ch == '{' )
        {
            s.push(ch);
        }
        else{
            if (!s.empty())
            {
                char top = s.top();
                if ( ch == ')' && top == '(' || ch == ']' && top == '[' || ch =='}' && top == '{' ){
                    s.pop();
                }     
                else{
                    return false;
                }
            
            }
            else{
                return false;
            }
        }
    }
    if (s.empty())
    {
        return true;
    }
    return false;
    
}

int main(){
    char input[] = "[{()}]";

    if(isValid(input))
    {
        printf("Expresion %s is valid.\n", input);
    }
    else{
        printf("Expresion %s is not valid.\n", input);
    }
    
    return 0;
}