	///Carte.h
	#pragma once
	#include <iostream>
	#include <vector>
	#include "Cititor.h"
	#include "Autor.h"
	#include <string>

	using namespace std;

	class Carte
	{
		string nume;
		Autor autor;
		vector<Cititor> cititori;
	public:
		Carte(string nume, Autor autor) : nume(nume), autor(autor)
		{ }

		void AddCititor(Cititor c)
		{
			cititori.push_back(c);
		}

		void Print()
		{
			cout << nume << ' ' <<"(Autor "<< autor.GetNume()<<") ";

			size_t i;
			for (i = 0; i < cititori.size(); i++)
			{
				if (i == 0)
					cout << '(';
				else
					cout << ',';
				cout<<cititori[i].GetNume();
			}
			if (i != 0)
				cout << ')';

			cout << '\n';
		}
	};
