#include <iostream>
#include <string.h>
using namespace std;

void StringToInt(char* out,int* result){
    *result = 0;
    int i = 0;
    while (out[i] != '\0')
    {
        int digit = out[i] - '0';
        *result = *result * 10 + digit;
        i++;

    }
   
}

int main(){

char out[] = "12345";
int number;
StringToInt(out, &number);
cout<<number<<endl;

return 0;
}