#include <iostream>
#include <cstring>

using namespace std;

int main() {
    union person {
       // string name; // we can not use string in UNION (c++), because it is dynamic
	char name[36];
        int age; 
    };
    union person P;
    P.age = 20;
    strcpy(P.name, "Sergey");
    cout << "Name: " << P.name << endl;
    cout << "Age: " << P.age << endl; // garbage value 
    return 0;
}
