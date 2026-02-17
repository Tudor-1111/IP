// IP-Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Biblioteca.h"
#include "Carte.h"
#include "Cititor.h"

using namespace std;

int main()
{
    Autor A1("Sadoveanu");
    Autor A2("Liviu Rebreanu");
    Carte C1("Ion", A2);
    Carte C2("Baltagul", A1);
    Carte C3("Padurea Spanzuratiolor", A2);

    Cititor A(1234, "Panainte Tudor");
    Cititor B(1235, "Padurariu Alexandru");
    Cititor C(1236, "Busuioc Matei");

    C1.AddCititor(A);
    C1.AddCititor(C);

    C2.AddCititor(B);
    C2.AddCititor(A);

    Biblioteca Bib;
    Bib.AddCarte(C1);
    Bib.AddCarte(C2);
    Bib.AddCarte(C3);

    Bib.Print();
}

