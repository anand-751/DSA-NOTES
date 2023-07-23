#include<iostream>
#include <algorithm>
#include <string.h>

using namespace std;

void reverseString(string& str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

// Reverse the words in a sentence
void reverseWords(string& sentence) {
    int start = 0;
    int end = 0;

    while (end < sentence.length()) {
        if (sentence[end] == ' ') {
            // Found a word boundary
            reverseString(sentence, start, end - 1);
            start = end + 1;
        }
        end++;
    }

    // Reverse the last word
    reverseString(sentence, start, end - 1);
}

// Reverse the sentence
void reverseSentence(string& sentence) {
    // Reverse the entire sentence
    reverseString(sentence, 0, sentence.length() - 1);

    // Reverse individual words
    reverseWords(sentence);
}


int main(){
    /*
    char ch[] = {'0' ,'1', '2', '3', '4', '5', '6' , '7' , '8' , '9'};
    int n = sizeof(ch)/sizeof(ch[0]);
    
    for (int i = 0; i < n; ++i)
    {
        printf("Ascii value of %c is %d\n" ,ch[i], ch[i]);
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        printf("integer value of %d is %c\n" , ch[i], ch[i]);
    }*/
    

    string input = "This is my car";

    reverseSentence(input);

    cout << "Reversed sentence: " << input << endl;

    return 0;
}
