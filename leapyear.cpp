   // C++ program to check if a given  year is leap year or not 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int year;
    cout<<"enter year";
    cin>>year; 
  
    if (year%4==0){
        cout << year<<" is Leap Year"; 
    }
    else{
        cout << year<<" is Not a Leap Year"; 
    }
    return 0; 
}