///Autor.h
#pragma once
#include <string>

using namespace std;

class Autor
{
	string nume;
public:
	Autor() {};

	Autor(string nume)
	{
		this->nume = nume;
	}

	string GetNume()
	{
		return this->nume;
	}
};