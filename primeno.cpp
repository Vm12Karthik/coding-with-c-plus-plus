   
// C++ program to check if a  Number is prime 
#include <iostream> 
using namespace std; 
  
bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false;

    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
  
int main() 
{ 
    int num;
    cout<<"enter the number";
    cin>>num;
    isPrime(num) ? cout << " true\n" : cout << " false\n"; 
    return 0; 
}