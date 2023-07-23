#include <iostream>

char firstNonRepeatedChar(const char* str) {
    int charCount[26] = {0};

    for (int i = 0; str[i]!='\0'; i++)
    {
        charCount[str[i] - 'a' ]++; 
    }
    

    for (int i = 0; str[i]!='0'; i++)
    {
        if (charCount[str[i] - 'a'] > 1)
        {
            return str[i];
        }
        
    }
    return '\0';
}

int main() {
  
  char str[] = "abcccdd";
  char result = firstNonRepeatedChar(str);

    if (result!='\0')
    {
        printf("First Repeating character from array is : %c", result);
    }else{
        printf("There is no repeating character in the string.");
    }
    

    return 0;
}
