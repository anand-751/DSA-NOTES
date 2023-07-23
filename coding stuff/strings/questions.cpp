#include<iostream>
using namespace std;
#include <string.h>

void reverse(char* sentence) {
    int length = strlen(sentence);
    
    // Reverse the entire sentence
    int i, j;
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        char temp = sentence[i];
        sentence[i] = sentence[j];
        sentence[j] = temp;
    }
    
    // Reverse each individual word
    int start = 0;
    for (i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            int end = i - 1;
            while (start < end) {
                char temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}


int main(){
    
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
    }
    

    char sentence[] = "This is my car";
    cout<<endl;
    cout<<"Initial sentence : This is my car"<<endl;
    reverse(sentence);
    cout<<"After reversing the sentence : "<<sentence<<endl;
    
    return 0;
}
