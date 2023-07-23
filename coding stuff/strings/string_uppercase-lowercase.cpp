#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

// compare funtion

    string s2 = "abc";
    string s3 = "abc";

    if (s2.compare(s3) == 0)
    {
        cout<<"strings are equal"<<endl;
    }
    
    
// convert to upper case

    string str  = "anand choudhary";


    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str [i] = 'A'+(str[i]-'a') ;                         // 32 is the difference between a & A 
        }
        
    }
    cout<< str <<endl;
    
    // convert to lower case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'a'+(str[i]-'A') ;                           // by adding 32 to A we get a  
        }
        
    }
    cout<<str<<endl ;

// AN ALTERNATIVE METHOD TO CONVERT BY USING IN-BUILT FUNCTION

    string s = "anand choudhary";


    transform(s.begin(),s.end(), s.begin(), ::toupper);
    cout<< s <<endl;

    string s1 = "ANAND CHOUDHARY";
    transform(s1.begin(),s1.end(), s1.begin(), ::tolower);
    cout<< s1 <<endl;

    return 0;

}

