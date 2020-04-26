#include<iostream>

using namespace std;

class ZadCandCPP {
public:
    void showDifference() {
        // output

        // int in C
        printf("%d\n", 25);

        // int in C++
        cout << 25 << endl;

        // char in C
        printf("%c\n", 'c');

        // char in C++
        cout << 'c' << endl;

        // float in C
        printf("%f\n", 25.03);

        // float in C++
        cout << double(25.03) << endl;

        // string in C
        char *string = "abcd test";
        printf("%s\n", string);

        // string in C++
        cout << "abcsdfasdas" << endl;

        // HEX in C
        printf("%x\n", 25);

        // HEX in C++
        cout << hex << 25 << endl;
    }
};

int main() {
    ZadCandCPP obj;
    obj.showDifference();
}