#include<iostream>
using namespace std;

void getAVG(int *array, int size) {
    int avg = 0;
    for (int i = 0; i < size; i++) {
        avg += array[i];
    }
    avg = double(avg) / size;
    cout << "AVG: " << avg << endl;
}

int main() {
    int list[5] = {1, 2, 10, 3, 4};
    getAVG(list, sizeof(list)/sizeof(*list));
}
