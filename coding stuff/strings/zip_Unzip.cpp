#include <iostream>
#include <string.h>

void Zip(char *s1, char *s2) {
    int l = strlen(s1);
    int count = 1;
    int j = 0;

    for (int i = 0; i < l; i++) {
        if (s1[i] == s1[i + 1]) {
            count++;
        } else {
            s2[j++] = s1[i];
            if (count > 1) {
                // Convert count to a character and append it to the output
                char count_char = '0' + count;
                s2[j++] = count_char;
            }
            count = 1;
        }
    }

    s2[j] = '\0'; // Null-terminate the output string
}

void Unzip(char *input, char *output){
    int l = strlen(input);
    int j = 0;

    for (int i = 0; i < l; i++)
    {
        char currentChar = input[i];

        if (isdigit(currentChar))
        {
            int count = currentChar - '0';

            for (int k = 0; k < count-1; k++)
            {
                output[j++] = input[i-1];
            }
            
        }else{
            output[j++] = currentChar;
        }
        
    }
    output[j] = '\0';
}

int main() {
    char s1[] = "aaabb";
    char s2[100]; // Adjust the size as needed
    Zip(s1, s2);
    printf("Input: %s\nOutput: %s\n", s1, s2);

    char input[] = "a2b2";
    char output[100];

    Unzip(input, output);
    printf("Input: %s\nOutput: %s\n", input, output);

}