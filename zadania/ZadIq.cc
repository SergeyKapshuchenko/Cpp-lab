#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* q = array;
    int i = 3;
    // czyli i[q] to jest tak jakby napisaliśmy *(q+i)
    // przesuwamy wskaźnik tablicy o tę wartość co jest przed [
    // bo tablica to wskaźnik na pierwszy element
    cout << "i[q] where i=3 and q is a pointer: " << i[q] << endl;
    cout << "i[q] where i=4 and q is a pointer: " << i+1[q] << endl;
    for (int j = 0; j < 9; j++) {
    	cout << "i[q] where i=" << j << " and q is a pointer: " << j[q] << endl;
    } 
    return 0;
}
