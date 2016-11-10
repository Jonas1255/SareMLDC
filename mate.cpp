#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <tchar.h>
using namespace std;



int main()
{
    double a,b;
    cout <<"iveskite a:";cin >> a;
    cout <<"pakelia laipsniu is dvieju: "<< pow(a,2)<<endl;
    cout <<"sinusas: "<<sin(a)<<endl;
    cout <<"cosinusas: "<<cos(a)<<endl;
    cout <<"tangentas: "<<tan(a)<<endl;
    cout <<"arcosinusas: "<<asin(a)<<endl;
    cout <<"arcocosinusas: "<<acos(a)<<endl;
    cout <<"arcotangentas: "<<atan(a)<<endl;
    cout <<"sin hiperbole: "<<sinh(a)<<endl;
    cout <<"cos hiperbole: "<<cosh(a)<<endl;
    cout <<"tan hiperbole: "<<tanh(a)<<endl;
    cout <<"e pakelta laipsniu is skaiciaus a: "<<exp(a)<<endl;
    cout <<"desimtainis logoritmas: "<<log(a)<<endl;
    cout <<"saknies skaicius: "<<sqrt(a)<<endl;
    cout <<"modulis: "<<fabs(a)<<endl;
    cout <<"apvalinimas i mazesne puse: "<<floor(a)<<endl;
    cout <<"apvalinimas i didesne puse: "<<ceil(a)<<endl;
    cout <<"fmodas "<<fmod(a,2)<<endl;

}
