#include <iostream>

using namespace std;

class ZadArytmetykaWskaznikow {
public:
    int tab[7] = {11, 22, 33, 44, 55, 66, 77};
    int *p = tab;

    void show() {

        cout << "*(p) = " << *(p) << endl;
        p++;
        cout << "*(p) = " << *(p) << endl;
        ++p;
        cout << "*(p) = " << *(p) << endl;
        cout << "++*p = " << ++*p << endl;
        cout << "*p = " << *p << endl;
        cout << "++(*p) = " << ++(*p) << endl;
        cout << "*p = " << *p << endl;
        cout << "++*(p) = " << ++*(p) << endl;
        cout << "*p = " << *p << endl;
        cout << "*p++ = " << *p++ << endl;
        cout << "*p = " << *p << endl;
        cout << "(*p)++ = " << (*p)++ << endl;
        cout << "*p = " << *p << endl;
        cout << "*(p)++ = " << *(p)++ << endl;
        cout << "*p = " << *p << endl;
        cout << "*++p = " << *++p << endl;
        cout << "*p = " << *p << endl;
        cout << "*(++p) = " << *(++p) << endl;
        cout << "*p = " << *p << endl;
    }
};

int main() {
    ZadArytmetykaWskaznikow obj;
    obj.show();

    return 0;
}