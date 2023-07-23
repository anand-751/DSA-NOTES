#include <iostream>

#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(char* s, char* t) {
    int l1 = strlen(s);
    int l2 = strlen(t);

    // If the lengths of the strings are different, they cannot be anagrams
    if (l1 != l2) {
        return false;
    }

    int count[128] = {0}; 

    for (int i = 0; i < l1; i++)
    {
        for (int i = 0; i < l1; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                count[s[i] - 'a']++;
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                count[s[i] - 'A' + 26]++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                count[s[i] - '0' + 52]++;
            }
        

            if (t[i] >= 'a' && t[i] <= 'z') {
                count[t[i] - 'a']--;
            } else if (t[i] >= 'A' && t[i] <= 'Z') {
                count[t[i] - 'A' + 26]--;
            } else if (t[i] >= '0' && t[i] <= '9') {
                count[t[i] - '0' + 52]--;
            }
        }
    }

        

    

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;

}

int main() {
    char str1[]= "Ab12bA";
    char str2[] = "Ab12ba";

    if (!areAnagrams(str1, str2)) {
        printf("'%s' and '%s' are not anagrams.\n", str1, str2);
        
    } else {
        printf("'%s' and '%s' are anagrams.\n", str1, str2);
    }

    return 0;
}
                        