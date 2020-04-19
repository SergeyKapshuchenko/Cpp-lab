#include<iostream>
using namespace std;

void decToBin(int n) 
{ 
    int binNumber[32]; 
    int i = 0; 

    while (n > 0) { 
        binNumber[i] = n % 2; 
        n /= 2; 
        i++; 
    } 
   
    for (int j = i - 1; j >= 0; j--) { 
        cout << binNumber[j];
    }
} 

int main(){
    int decimal;
    cout << "Put decimal to convert to binary: " << endl;
    cin >> decimal;
    cout << "Number " << decimal << " in binary code: " << endl;
    decToBin(decimal);
    cout << endl;

    return 0;
}
