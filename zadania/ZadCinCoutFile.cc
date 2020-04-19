#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Writing to file. Put string:  " << endl;

    getline(cin, str);
    ofstream file;
    file.open("zadanie10.txt", ios_base::app);
    file << str << endl;
    file.close();

    ifstream readFile;
    string line;
    readFile.open("zadanie10.txt");
    if (!readFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    } else {
    	while (getline(readFile, line)) {
            cout << "Line from file: " << line << endl;
        }
    }
}
