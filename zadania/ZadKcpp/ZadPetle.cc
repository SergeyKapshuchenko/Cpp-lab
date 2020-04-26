#include <iostream>

using namespace std;

class ZadPetle {
public:
    int i;
    int sum;
    char test[6] = "test1";

    int findChar(char tab[], char c) {
        i = 0;
        while (1) {
            if (tab[i] == c) return i;
            else if (tab[i] == 'c') break;
            i++;
        }
        return -1;
    }

    void findExamples() {
        cout << "IDX of char b: " << findChar("abcdfeg", 'b') << endl;
        cout << "IDX of char g (break): " << findChar("abcdfeg", 'g') << endl;
        cout << "IDX of char o (doesn't exist): " << findChar("abcdfeg", 'o') << endl;

    }

    void _while() {
        sum = 0;
        i = 1;
        while (i <= 5) {
            sum += i;
            i++;
        }
        cout << "operator while, sum = " << sum << endl;
    }

    void _do_while() {
        i = 1;
        sum = 0;
        do {
            sum += i;
            i++;
        } while (i <= 5);
        cout << "operator do while, sum = " << sum << endl;
    }

    void _continue() {
        for (i = 0; i < 5; i++) {
            if (i % 2 == 0) continue;
            cout << "Char := " << test[i] << endl;
        }
    }
};

int main() {
    ZadPetle obj;
    obj.findExamples();
    obj._while();
    obj._do_while();
    obj._continue();

    return 0;
}