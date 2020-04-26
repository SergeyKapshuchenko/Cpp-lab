#include <iostream>

using namespace std;

class ZadIq {
public:
    ZadIq() = default;

    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *q = array;
    int i = 3;
};

int main() {
    ZadIq object;
    cout << "i[q] where i=3 and q is a pointer: " << object.i[object.q] << endl;
    cout << "i[q] where i=4 and q is a pointer: " << object.i + 1[object.q] << endl;
    for (int j = 0; j < 9; j++) {
        cout << "i[q] where i=" << j << " and q is a pointer: " << j[object.q] << endl;
    }
    return 0;
}