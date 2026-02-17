///Biblioteca.h
#pragma once
#include <string>
#include "Cititor.h"
#include "Carte.h"
#include <vector>

class Biblioteca
{
	vector<Carte> carti;
public:
	Biblioteca();
	void AddCarte(Carte c);
	void Print();
};
