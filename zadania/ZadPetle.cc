#include <iostream>
using namespace std;

int findChar(char tab[], char c) {
    int i = 0;
    while(1) {
        if (tab[i] == c) return i;
        else if (tab[i] == 'c') break;
        i++;
    }
    return -1;
}

int main() {
    cout << "IDX of char b: " << findChar("abcdfeg", 'b') << endl;
    cout << "IDX of char g (break): " << findChar("abcdfeg", 'g') << endl;
    cout << "IDX of char o (doesn't exist): " << findChar("abcdfeg", 'o') << endl;    

    int sum = 0;
    int i = 1;
    while(i <= 5){
        sum += i;
        i++;
    }
    cout << "operator while, sum = " << sum << endl;

    i = 1;
    sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= 5);
    cout << "operator do while, sum = " << sum << endl;
   
    char test[] = "test1";
    for (i=0;i<5;i++) {
        if (i % 2 == 0) continue;
        cout << "Char := " << test[i] << endl;
    }  

    return 0;
}
