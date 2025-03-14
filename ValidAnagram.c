/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define ALPHABET_SIZE 26
bool isAnagram(char *s, char *t) {
    int count[ALPHABET_SIZE] = {0}; 


    if (strlen(s) != strlen(t)) {
        return 0;
    }


    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++; 
        count[t[i] - 'a']--; 
    }
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
                         char str1[] = "anagram";
                         char str2[] = "nagaram";
                     
                         if (isAnagram(str1, str2)) {
                             printf("true");
                         } else {
                             printf("false");
                         }
                     
                         return 0;
                     }

                     /* Input: s = "anagram", t = "nagaram"

                                   Output: true*/