#include <iostream>

using namespace std;

class ZadWywolanieFunkcji {
public:
    void First() {
        cout << "First function is called" << endl;
    }

    void Second() {
        cout << "Second function is called" << endl;
    }
};


int main(int argc, char *argv[]) {

    ZadWywolanieFunkcji obj;

    switch (*argv[1]) {
        case '1':
            obj.First();
            break;
        case '2':
            obj.Second();
            break;
        default:
            cout << "Put correct argument in range 1 to 5" << endl;
    }

    // drugi sposob uzywajac operatora warunkowego (ternary operator)
    // nie wiem czy o to chodzilo

    (*argv[1] == '1') ? obj.First() : obj.Second();

}