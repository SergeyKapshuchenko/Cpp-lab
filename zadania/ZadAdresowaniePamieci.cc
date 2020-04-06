#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 33;
    int c = 1000;
    // na swoim laptopie kierunek adresowania mam w dół
    cout << "Addres pierwszej zmiennej: " << (unsigned long) &a << endl;
    cout << "Addres drugiej zmiennej: " << (unsigned long) &b << endl;
    cout << "Addres trzeciej zmiennej: " << (unsigned long) &c << endl;
    return 0;
}
