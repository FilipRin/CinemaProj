#include"Strani.h"
void Strani::pisi(ostream& it)
{
	it << oznaka << " ";
	Film::pisi(it);
	it << " " << zemljaPorekla << " " << prevod;
}
