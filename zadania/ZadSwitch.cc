#include <iostream>
#include <cstring>

using namespace std;

int getIndex(string tab[], string s) {
    for (int i=0; i<3; i++) {
	if (tab[i] == s) return i;
    }
    return -1;
}

int main() {
    string tab[] = {"GreatBritain", "Ukraine", "Poland"};
    string s;
    cout << "Find the capital by country [GreatBritain], [Ukraine], [Poland]: ";
    cin >> s;
    switch (getIndex(tab, s)) {
        case 0:
	    cout << "The capital of Great Britain is London" << endl;
            break;
        case 1:
            cout << "The capital of Ukraine is Kyiv" << endl;
            break;
        case 2:
            cout << "The capital of Poland is Warszawa" << endl;
            break;
        default:
            cout << "No such country in list" << endl; 
    }
    return 0;
}
