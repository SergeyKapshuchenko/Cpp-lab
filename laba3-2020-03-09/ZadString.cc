#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string myString = "Hello my friend. What is your name?";
    string name = "Sergey";
    string nazwisko = "Kapshuchenko";
    string test = "1234";
    for (int i = 0; i < myString.length(); i += 5 ) {
        myString[i] = 'O';
    }
    std::cout << "My string: " << myString << std::endl;
    std::cout << "I am " << name + ' ' + nazwisko << std::endl;
    for (int i = 0; i < test.length(); i++ ) {
        std::cout << "Single char: " << test[i] << std::endl;
    }
}
