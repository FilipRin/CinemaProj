#include "Vreme.h"

bool Vreme::operator>(Vreme& v) const
{
	if (this->sati > v.sati) return true;
	else if (this->sati == v.sati && this->minuti > v.minuti) return true;
	else return false;
}

Vreme& Vreme::operator+(Vreme& v)
{
	int min, h;
	h = this->sati + v.sati;
	min = this->minuti + v.minuti;
	while (min >= 60) {
		h++;
		min -= 60;
	}
	return *new Vreme(h, min);
}

ostream& operator<<(ostream& it, Vreme& v)
{
	if (v.sati < 10) it << "0";
	it << v.sati<<":";
	if (v.minuti < 10)it << "0";
	it << v.minuti;
	return it;
}
