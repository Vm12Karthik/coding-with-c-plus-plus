// C++ Program to find the length of a string  
#include <cstring> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    string str;
    cout<<"enter string";
    cin>>str;

    int length = 0; 
  
    for (int i = 0; str[i] != '\0'; i++) { 
        length++; 
    } 
  
    cout << "The length of the string is: " << length  << endl; 
  
    return 0; 
}