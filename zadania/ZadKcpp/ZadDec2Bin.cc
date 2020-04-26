#include<iostream>

using namespace std;

class ZadDec2Bin {
public:
    void decToBin(int n) {
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
};

int main() {
    ZadDec2Bin obj;
    int decimal;
    cout << "Put decimal to convert to binary: " << endl;
    cin >> decimal;
    cout << "Number " << decimal << " in binary code: " << endl;
    obj.decToBin(decimal);
    cout << endl;

    return 0;
}