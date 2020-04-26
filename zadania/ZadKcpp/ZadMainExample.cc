#include <iostream>

using namespace std;

class ZadMainExample {

public:

    void First() {
        cout << "First function is called" << endl;
    }

    void Second() {
        cout << "Second function is called" << endl;
    }

    void Third() {
        cout << "Third function is called" << endl;
    }

    void Fourth() {
        cout << "Fourth function is called" << endl;
    }

    void Fifth() {
        cout << "Fifth function is called" << endl;
    }
};

int main(int argc, char *argv[]) {
    cout << "Put argument to call function" << endl;
    ZadMainExample object;
    for (int i = 1; i < argc; i++) {
        if (*argv[i] == '1') {
            object.First();
        } else if (*argv[i] == '2') {
            object.Second();
        } else if (*argv[i] == '3') {
            object.Third();
        } else if (*argv[i] == '4') {
            object.Fourth();
        } else if (*argv[i] == '5') {
            object.Fifth();
        } else {
            cout << "Put correct argument in range 1 to 5" << endl;
        }
    }
}