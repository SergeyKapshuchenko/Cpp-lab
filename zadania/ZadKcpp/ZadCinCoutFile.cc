#include<iostream>
#include<fstream>
#include<cstring>
#include<string>

using namespace std;

class ZadCinCoutFile {
private:
    string str;
    ofstream file;
    ifstream readFile;
    string line;

public:
    void writeToFile() {
        string str;
        cout << "Writing to file. Put string:  " << endl;

        getline(cin, str);
        file.open("zadanie10.txt", ios_base::app);
        file << str << endl;
        file.close();
    }

    void readFromFile() {
        ifstream readFile;
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
};

int main() {
    ZadCinCoutFile obj;
    obj.writeToFile();
    obj.readFromFile();
}