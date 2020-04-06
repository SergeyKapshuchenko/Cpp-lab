#include <iostream>
using namespace std;

void First() {
    cout << "First function is called" << endl;
}

void Second() {
    cout << "Second function is called" << endl;
}

int main(int argc, char *argv[]) {

    // pierwszy sposob uzywajac switcha

    switch (*argv[1]) {
        case '1':
            First();
            break; 
        case '2':
            Second();
            break;
        default:
            cout << "Put correct argument in range 1 to 5" << endl;
    }

    // drugi sposob uzywajac operatora warunkowego (ternary operator)
    // nie wiem czy o to chodzilo

    (*argv[1] == '1') ? First() : Second();

}
