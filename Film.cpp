#include"Film.h"

void Film::pisi(ostream& it)
{
	it << naziv << " " << trajanje << " " << dohvProsecnuOcenu();
}

void Film::oceniFilm(int ocena) 
{
	this->ocene += ocena;
}

double Film::dohvProsecnuOcenu()
{
	double rez = 0;
	if (this->ocene.dohvBroj() == 0) return 0;
	for (int i = 0; i < this->ocene.dohvBroj(); i++) {
		rez += this->ocene[i];
	}
	rez /= this->ocene.dohvBroj();
	return rez;
}

ostream& operator<<(ostream& it, Film& f)
{
	f.pisi(it);
	return it;
}
