//
// Created by Сергей Капшученко on 03.05.2020.
//

#ifndef ZADKCPP_ZADKCPP_H
#define ZADKCPP_ZADKCPP_H

#include <string>
#include <cstdio>
#include<iostream>
#include<fstream>

using namespace std;


class ZadKcpp {
private:
    void first();

    void second();

    void third();

    void wrongArg();

    int value;

    int idx;

    int sum;

    static char test[6];

    static string names[3];
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

    static int myArray[9];

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

#endif
