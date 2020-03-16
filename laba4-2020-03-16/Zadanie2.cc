#include <iostream>
using namespace std;

void First() {
    cout << "First function is called" << endl;
}

void Second() {
    cout << "Second function is called" << endl;
}

void Third() {
    cout << "Third function is called" << endl;
}

extern "C" void Fourth() {
    cout << "Fourth function is called" << endl;
}

extern "C" void Fifth() {
    cout << "Fifth function is called" << endl;
}

int main(int argc, char *argv[]){
  cout << "Put argument to call function" << endl;                            
  for (int i = 1; i < argc; i++) {
    if (*argv[i] == '1') {
      First();
    } else if (*argv[i] == '2') {
      Second();
    } else if (*argv[i] == '3') {
      Third();
    } else if (*argv[i] == '4') {
      Fourth();
    } else if (*argv[i] == '5') {
      Fifth();
    } else {
      cout << "Put correct argument in range 1 to 5" << endl;
    }
  }
}
