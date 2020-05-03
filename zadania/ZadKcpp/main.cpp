#include <iostream>
#include <string>
#include "zadania.h"

using namespace std;

void ZadKcpp::first() {
    cout << "First function is called" << endl;
}


void ZadKcpp::second() {
    cout << "Second function is called" << endl;
}

void ZadKcpp::third() {
    cout << "Third function is called" << endl;
}

void ZadKcpp::wrongArg() {
    cout << "Put correct argument in range 1 to 3" << endl;
}


void ZadKcpp::mainExample(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        if (*argv[i] == '1') {
            first();
        } else if (*argv[i] == '2') {
            second();
        } else if (*argv[i] == '3') {
            third();
        } else {
            wrongArg();
        }
    }
}

int ZadKcpp::getValue() {
    return value;
}

int *ZadKcpp::pointer() {
    static int values[10];

    for (int i = 0; i < 10; ++i) {
        values[i] = i + 1;
    }

    return values;
}

int &ZadKcpp::reference(int i) {
    return myArray[i];
}

void ZadKcpp::zwracanie() {
    int *p = pointer();

    for (int i = 0; i < 10; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    printf("\n");
    cout << "Function to return reference" << endl;
    cout << "Value before change" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "myArray[" << i << "] = ";
        cout << myArray[i] << endl;
    }

    reference(1) = 22;
    reference(2) = 0;

    cout << "Value after change" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "myArray[" << i << "] = ";
        cout << myArray[i] << endl;
    }
}

void ZadKcpp::adresowaniePamieci() {
    int a = 0;
    int b = 33;
    float c = 15.35;
    cout << "Addres pierwszej zmiennej: " << (unsigned long) &a << endl;
    cout << "Addres drugiej zmiennej: " << (unsigned long) &b << endl;
    cout << "Addres trzeciej zmiennej: " << (unsigned long) &c << endl;
}

void ZadKcpp::iq() {
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *q = array;
    int i = 3;
    cout << "i[q] where i=3 and q is a pointer: " << i[q] << endl;
    cout << "i[q] where i=4 and q is a pointer: " << i + 1[q] << endl;
    for (int j = 0; j < 9; j++) {
        cout << "i[q] where i=" << j << " and q is a pointer: " << j[q] << endl;
    }
}

void ZadKcpp::arytmetykaWskaznikow() {
    int tab[7] = {11, 22, 33, 44, 55, 66, 77};
    int *p = tab;

    cout << "*(p) = " << *(p) << endl;
    p++;
    cout << "*(p) = " << *(p) << endl;
    ++p;
    cout << "*(p) = " << *(p) << endl;
    cout << "++*p = " << ++*p << endl;
    cout << "*p = " << *p << endl;
    cout << "++(*p) = " << ++(*p) << endl;
    cout << "*p = " << *p << endl;
    cout << "++*(p) = " << ++*(p) << endl;
    cout << "*p = " << *p << endl;
    cout << "*p++ = " << *p++ << endl;
    cout << "*p = " << *p << endl;
    cout << "(*p)++ = " << (*p)++ << endl;
    cout << "*p = " << *p << endl;
    cout << "*(p)++ = " << *(p)++ << endl;
    cout << "*p = " << *p << endl;
    cout << "*++p = " << *++p << endl;
    cout << "*p = " << *p << endl;
    cout << "*(++p) = " << *(++p) << endl;
    cout << "*p = " << *p << endl;
}

void ZadKcpp::wywolanieFunkcji(int argc, char **argv) {

    if (argc < 2) {
        cout << "Put argument!" << endl;
        exit(1);
    }

    switch (*argv[1]) {
        case '1':
            first();
            break;
        case '2':
            second();
            break;
        case '3':
            third();
            break;
        default:
            wrongArg();
    }

    (*argv[1] == '1') ? first() : (*argv[1] == '2') ? second() : (*argv[1] == '3') ? third() : wrongArg();
}

void ZadKcpp::priorytetyOperatorow() {
    int x = 1;
    int y = 2;
    int z = 3;
    int result[] = {4, 4, 4, 4};

    result[0] *= - ++x * x-- + -y-- % ++z;
    cout << "0: " << result[0] << endl;

    result[1] *= -(++x) * (x--) + -(y--) % (++z);
    cout << "1: " << result[1] << endl;

    result[2] *= (-(++x)) * (x--) + (-(y--)) % (++z);
    cout << "2: " << result[2] << endl;

    result[3] *= ((-(++x)) * (x--)) + ((-(y--)) % (++z));
    cout << "3: " << result[3] << endl;
}

void ZadKcpp::decToBin(int n) {
    int binNumber[32];
    int i = 0;

    while (n > 0) {
        binNumber[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binNumber[j];
    }
    cout << endl;
}

int ZadKcpp::binToDec(string n) {
    int decimal = 0;
    int base = 1;
    int len = n.length();

    for (int i = len - 1; i >= 0; i--) {
        if (n[i] == '1')
            decimal += base;
        base *= 2;
    }

    return decimal;
}

void ZadKcpp::writeToFile() {
    string str;
    cout << "Writing to file. Put string:  " << endl;

    getline(cin, str);
    file.open("zadanie10.txt", ios_base::app);
    file << str << endl;
    file.close();
}

void ZadKcpp::readFromFile() {
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

void ZadKcpp::CinCoutFile() {
    writeToFile();
    readFromFile();
}

int ZadKcpp::findChar(char *tab, char c) {
    idx = 0;
    while (1) {
        if (tab[idx] == c) return idx;
        else if (tab[idx] == 'c') break;
        idx++;
    }
    return -1;
}

void ZadKcpp::findExamples() {
    cout << "IDX of char b: " << findChar("abcdfeg", 'b') << endl;
    cout << "IDX of char g (break): " << findChar("abcdfeg", 'g') << endl;
    cout << "IDX of char o (doesn't exist): " << findChar("abcdfeg", 'o') << endl;
}

void ZadKcpp::_while() {
    sum = 0;
    idx = 1;
    while (idx <= 5) {
        sum += idx;
        idx++;
    }
    cout << "operator while, sum = " << sum << endl;
}

void ZadKcpp::_do_while() {
    idx = 1;
    sum = 0;
    do {
        sum += idx;
        idx++;
    } while (idx <= 5);
    cout << "operator do while, sum = " << sum << endl;
}

void ZadKcpp::_continue() {
    for (idx = 0; idx < 5; idx++) {
        if (idx % 2 == 0) continue;
        cout << "Char := " << test[idx] << endl;
    }
}

void ZadKcpp::Petle() {
    findExamples();
    _while();
    _do_while();
    _continue();
}

int ZadKcpp::getIndex(string *names, string s) {
    for (int i = 0; i < 3; i++) {
        if (names[i] == s) return i;
    }
    return -1;
}

void ZadKcpp::findCapital() {
    cout << "Find the capital by country [GreatBritain], [Ukraine], [Poland]: ";
    cin >> s;
    switch (getIndex(names, s)) {
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

void ZadKcpp::Switch() {
    findCapital();
}

int main(int argc, char *argv[]) {
    ZadKcpp obj(128);

    obj.mainExample(argc, argv);

    obj.zwracanie();

    obj.adresowaniePamieci();

    obj.iq();

    obj.arytmetykaWskaznikow();

    obj.wywolanieFunkcji(argc, argv);

    obj.priorytetyOperatorow();

    cout << obj.binToDec("11111") << endl;

    obj.decToBin(31);

    obj.CinCoutFile();

    obj.Petle();

    obj.Switch();

    return 0;
}