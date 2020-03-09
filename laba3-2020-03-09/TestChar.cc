#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char hello[] = "co to jest test";
    char str1[]= "To be or not to be";
    char test3[6];
    string test1;
    test1 = "Hello my friend";

   // strcpy(test3, "Dzien dobry wszystkim");
   // strncpy( test3, hello, sizeof(test3));
   // std::cout << "Test3: " << test3[5] << std::endl;

    strncpy( test3, str1, 5);
    std::cout << "Test3: " << test3 << std::endl;
   // std::cout << "Sizeof to liczba bajtow: " << sizeof(test3) << std::endl;

   // std::cout << "Hello: " << hello << std::endl;
   // std::cout << "Test1: " << test1 << std::endl;

}
