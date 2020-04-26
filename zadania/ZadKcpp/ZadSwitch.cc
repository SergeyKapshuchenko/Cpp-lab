#include <iostream>
#include <cstring>

using namespace std;

class ZadSwitch {
private:
    string tab[3] = {"GreatBritain", "Ukraine", "Poland"};
public:
    string s;

    int getIndex(string tab[], string s) {
        for (int i = 0; i < 3; i++) {
            if (tab[i] == s) return i;
        }
        return -1;
    }

    void findCapital() {
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
    }
};


int main() {
    ZadSwitch obj;

    obj.findCapital();

    return 0;
}