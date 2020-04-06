#include <iostream>
using namespace std;

int main() {
	int tab[] = {11, 22, 33, 44, 55, 66, 77};
        int* p = tab;
		
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

	return 0;
}
