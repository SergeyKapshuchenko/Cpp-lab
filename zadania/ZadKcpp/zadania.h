//
// Created by Сергей Капшученко on 03.05.2020.
//

#ifndef ZADKCPP_ZADANIA_H
#define ZADKCPP_ZADANIA_H

#include <string>
#include <cstdio>
#include<iostream>
#include<fstream>

using namespace std;

int myArray[] = {10, 12, 8, 2, 44, 5, 0, 10, 33};

class ZadKcpp {
private:
    void first();

    void second();

    void third();

    void wrongArg();

    int value;

    int idx;

    int sum;

    char test[6] = "test1";

    string names[3] = {"GreatBritain", "Ukraine", "Poland"};

    string s;

    string str;

    ofstream file;

    ifstream readFile;

    string line;

public:
    ZadKcpp() {
        value = 0;
    }

    ZadKcpp(int n) {
        value = n;
    }

    void mainExample(int argc, char *argv[]);

    int getValue();

    int *pointer();

    int &reference(int i);

    void zwracanie();

    void adresowaniePamieci();

    void iq();

    void arytmetykaWskaznikow();

    void wywolanieFunkcji(int argc, char *argv[]);

    void priorytetyOperatorow();

    void decToBin(int n);

    int binToDec(string n);

    void writeToFile();

    void readFromFile();

    void CinCoutFile();

    int findChar(char tab[], char c);

    void findExamples();

    void _while();

    void _do_while();

    void _continue();

    void Petle();

    int getIndex(string names[], string s);

    void findCapital();

    void Switch();
};

#endif //ZADKCPP_ZADANIA_H
