///Cititor.h
#pragma once
#include <string>

using namespace std;

class Cititor
{
	int CNP;
	string nume;
public:
	Cititor(int CNP, string nume)
	{
		this->CNP = CNP;
		this->nume = nume;
	}

	string GetNume()
	{
		return nume;
	}
};