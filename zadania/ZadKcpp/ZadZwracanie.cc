#include <iostream>
#include <ctime>

using namespace std;

int myArray[] = {10, 12, 8, 2, 44};

class ZadZwracanie {

public:

    int value() {
        return 128;
    }

    int *pointer() {

        static int values[10];

        for (int i = 0; i < 10; ++i) {
            values[i] = i + 1;
        }
        cout << "Function to return pointer to array" << endl;
        return values;
    }

    int &reference(int i) {
        return myArray[i];
    }
};

int main() {
    int *p;
    int val;

    ZadZwracanie object;

    cout << "Function to return value: " << object.value() << endl << endl;

    p = object.pointer();

    for (int i = 0; i < 10; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    printf("\n");
    cout << "Function to return reference" << endl;
    cout << "Value before change" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "myArray[" << i << "] = ";
        cout << myArray[i] << endl;
    }

    object.reference(1) = 22;
    object.reference(2) = 0;

    cout << "Value after change" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "myArray[" << i << "] = ";
        cout << myArray[i] << endl;
    }

    return 0;
}