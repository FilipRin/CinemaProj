#pragma once
#ifndef _film_h_
#define _film_h_
#include"Lista.h"
#include<iostream>
#include"Vreme.h"
using namespace std;


class Film {
	
protected:
	string naziv;
	Vreme trajanje;
	Lista<int> ocene;
	virtual void pisi(ostream& it);
public:
	Film(string n, Vreme& time) :naziv(n), trajanje(time) { }
	void oceniFilm(int ocena);
	const Vreme& dohvVreme()const { return trajanje; }
	double dohvProsecnuOcenu();
	virtual char Oznaka()const=0;
	friend ostream& operator<<(ostream& it, Film& f);
	virtual ~Film() {}
};

#endif // !_film_h_
