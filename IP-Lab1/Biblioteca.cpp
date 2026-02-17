///Biblioteca.cpp
#include "Biblioteca.h"
#include <iostream>

Biblioteca::Biblioteca()
{ }

void Biblioteca::AddCarte(Carte c)
{
	this->carti.push_back(c);
}

void Biblioteca::Print()
{
	for (auto i : carti)
	{
		i.Print();
	}
}