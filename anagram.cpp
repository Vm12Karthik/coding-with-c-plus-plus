   
// C++ program to check if two strings  Are anagrams of each other 
#include <iostream> 
using namespace std; 
  
#define NO_OF_CHARS 256 
  
bool areAnagram(char* str1, char* str2) 
{ 
    int count1[NO_OF_CHARS] = { 0 }; 
    int count2[NO_OF_CHARS] = { 0 }; 
    int i; 
  

    for (i = 0; str1[i] && str2[i]; i++) { 
        count1[str1[i]]++; 
        count2[str2[i]]++; 
    } 
  
    if (str1[i] || str2[i]) 
        return false; 
  
    for (i = 0; i < NO_OF_CHARS; i++) 
        if (count1[i] != count2[i]) 
            return false; 
  
    return true; 
} 
  
int main() 
{ 
    char str1[10]; 
    char str2[10]; 

    cout<<"enter str1";
    cin>>str1;
    cout<<"enter str2";
    cin>>str2;
  
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each "
                "other"; 
  
    return 0; 
}
