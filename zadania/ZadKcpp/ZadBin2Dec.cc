#include <iostream>
#include <string>

using namespace std;

class ZadBin2Dec {
public:
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
};

int main() {
    ZadBin2Dec object;
    string n = "11111"; // 31
    cout << object.binToDec(n) << endl;
}