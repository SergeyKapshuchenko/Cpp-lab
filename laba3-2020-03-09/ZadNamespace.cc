#include <iostream>
#include <string>
using namespace std;

namespace name {
    string name = "Sergey"; 
}

int main(){
    std::cout << "My name is " << name::name << std::endl;
  return 0;
}


