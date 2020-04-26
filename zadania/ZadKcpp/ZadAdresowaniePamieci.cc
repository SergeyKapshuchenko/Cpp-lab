#include <iostream>

using namespace std;

class ZadAdresowaniePamieci {
public:
    int a = 0;
    int b = 33;
    int c = 1000;
};

int main() {
    ZadAdresowaniePamieci object;
    cout << "Addres pierwszej zmiennej: " << (unsigned long) &(object.a) << endl;
    cout << "Addres drugiej zmiennej: " << (unsigned long) &(object.b) << endl;
    cout << "Addres trzeciej zmiennej: " << (unsigned long) &(object.c) << endl;
    return 0;
}