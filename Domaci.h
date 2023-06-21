#pragma once
#ifndef _domaci_h_
#define _domaci_h_
#include"Film.h"
class Domaci :public Film {
	char oznaka;
public:
	Domaci(string& n, Vreme& time):Film(n,time) { oznaka = 'D'; }
	char Oznaka()const { return oznaka; }
	void pisi(ostream& it) override;
	~Domaci() {}
	friend ostream& operator<<(ostream& it, Domaci d) { d.pisi(it); return it; }
};

#endif // !_domaci_h_

