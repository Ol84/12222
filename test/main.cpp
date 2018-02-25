#include <iostream>
#include <windows.h>
#include <cstdio>
#include <stdio.h>
#include <string.h>


void SoftwareDeveloper()
{

    SetConsoleOutputCP(65001);
    std::cout << " ₴ \n\n";
}

int main()
{
    //using namespace std;
    //SoftwareDeveloper();
        setlocale(LC_ALL, "ukr");

    string nstr = "Мова солов\'їна";
    std::cout << nstr;


    system("pause");
    return 0;
}









/*
#include <iostream>
#include <fstream>
#include <ctime>
#include <windows.h>

using namespace std;

string timeos() {
    time_t rawtime;
    time(&rawtime);
    return ctime(&rawtime);
}

int main() {
    //setlocale(LC_ALL,"ru_RU.CP1251");
    system("chcp 1251");
    system("cls");
    cout << (char)0xa9 << " Прізвище, ім\'я, ЦНТУ, Кропивницький, 2017" << endl;
    system("pause");
/*
    fstream f_in_out;
    f_in_out.open("HappyEND.txt", ios_base::out);
    if ( f_in_out ) {
       f_in_out << timeos();
       f_in_out.close();
       f_in_out.open("HappyEND.txt", ios_base::in);
       if ( f_in_out ){
         string timestr;
         getline(f_in_out, timestr);
         cout << timestr << "\n\n\n";
         f_in_out.close();
         cin >> timestr;
       } else cout << "Error opening file HappyEND.txt for input...";
    } else cout << "Error opening file HappyEND.txt for output...";

    return 0;
}

*/
