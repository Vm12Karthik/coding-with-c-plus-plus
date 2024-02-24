#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int number; 
    cout<<"enter the number to check";
    cin>>number; 
    if (number >= 0) { 
        cout << number << " is a positive number." << endl; 
    } 
    else { 
        cout << number << " is a negative number." << endl; 
    } 
    return 0; 
}