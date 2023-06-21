#pragma once
#include <iostream>
#ifndef _vreme_h_
#define _vreme_h_

using namespace std;
class Vreme {
	int sati;
	int minuti;
public:
	Vreme(int h, int min) :sati(h), minuti(min) {}
	bool operator>(Vreme& v)const;
	Vreme& operator+(Vreme& v);
	friend ostream& operator<<(ostream& it, Vreme& v);
};

#endif // !_vreme_h_
