#include <iostream> 
#include <string> 
using namespace std; 
  
int binToDec(string number) {  
    int decimal = 0; 
    int base = 1; 
    int len = number.length();
 
    for (int i = len - 1; i >= 0; i--) { 
        if (number[i] == '1') 
            decimal += base; 
        base *= 2; 
    }
 
    return decimal; 
} 

int main() 
{ 
    string n = "11111"; // 31 
    cout << binToDec(n) << endl; 
} 
