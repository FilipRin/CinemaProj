#pragma once
#ifndef _strani_h_
#define _strani_h_
#include"Film.h"
class Strani :public Film {
	string zemljaPorekla;
	char oznaka;
public:
	static enum tip
	{
		TITLOVAN,
		SINHRONIZOVAN
	};
	tip prevod;
	Strani(string n, Vreme& time, string c, tip t) :Film(n, time) {
		zemljaPorekla = c;
		prevod = t;
		oznaka='S';
	}
	char Oznaka()const { return oznaka; }
	void pisi(ostream& it) override;
	friend ostream& operator<<(ostream& it, Strani s) { s.pisi(it); return it; }
};

#endif // !_strani_h_
