#include<iostream>

using namespace std;

class ZadPrzekazywaniaTablic {
private:
    int list[5] = {1, 2, 10, 3, 4};
    int size = sizeof(list) / sizeof(*list);

public:
    void getAVG() {
        int avg = 0;
        for (int i = 0; i < size; i++) {
            avg += list[i];
        }
        avg = double(avg) / size;
        cout << "AVG: " << avg << endl;
    }
};

int main() {
    ZadPrzekazywaniaTablic obj;
    obj.getAVG();
}