#include <iostream>
#include <string.h>
using namespace std;


void reverse(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void IntToString(int number, char* out) {
    //for checking if the number is negative or not
    int isNegative = false;
    if (number<0)
    {
        isNegative = true;
        number = -number;
    }
    
    int i = 0;
    while (number != 0) {
        int rem = number%10;
        out[i] = '0' + rem;
        i++;
        number = number/10;
    }
    // negative value is stored in char out
    if (isNegative)
    {
        out[i] = '-';
        i++;
    }
    
    out[i] = '\0';
    reverse(out);                    
    cout<< out ;
}

int main() {
    int number = -12345  ;
    char out[5];
    cout << "BEFORE CONVERSION : " << number << endl;
    cout << "AFTER CONVERSION : " ;
    IntToString(number,out);
    

    return 0;
}
