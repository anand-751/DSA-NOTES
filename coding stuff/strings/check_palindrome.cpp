#include <iostream>
#include <string.h>

using namespace std;

bool isPresent(char* str){
    int l = strlen(str);
    int left = 0;
    int right = l-1;
     
    while (left<right)
    {
        if (str[left] != str[right])
        {
            return false;
        }else{
            left++;
            right--;
        }
        
    }
    return true;
}

int main(){
    char str[10];
    cin >> str;         


    if (isPresent(str))
    {
        printf("%s is a palindrom", &str);
    }else{
        printf("%s is not a palindrom", &str);
    }
    
    return 0;
}