#include <iostream>
#include <ctime>

using namespace std;

int value() {
    return 128;
}

int *pointer() {
    //C++ does not allow to return an entire array as an argument to a function
    //However, you can return a pointer to an array by specifying the array's name without an index.
    //Czyli przez wskaźnik i tablice to jest to samo ? w obu przypadkach zwracam wskaznik

    static int values[10];

    for (int i = 0; i < 10; ++i) {
        values[i] = i + 1;
    }
    cout << "Function to return pointer to array" << endl;
    return values;
}

int myArray[] = {10, 12, 8, 2, 44};

int &reference(int i) {
    return myArray[i];
}

int main() {
    int *p;
    int val;

    cout << "Function to return value: " << value() << endl << endl;

    p = pointer();

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

    reference(1) = 22;
    reference(2) = 0;

    cout << "Value after change" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "myArray[" << i << "] = ";
        cout << myArray[i] << endl;
    }

    return 0;
}
