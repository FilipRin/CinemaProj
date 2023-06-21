#include<iostream>
#include"Vreme.h"
#include"Film.h"
#include"Domaci.h"
#include"Strani.h"
#include"Lista.h"
using namespace std;
int main() {
	string ss = "Nas film";
	Vreme v1(1,30);
	Domaci d(ss, v1);
	Strani s("Foreign movie", v1, "USA", Strani::tip::TITLOVAN);
	Vreme v2(1, 55);

	cout << v1 + v2<<endl;
	Vreme v3 = v1 + v2;
	cout << v3 << endl;

	d.oceniFilm(9);
	d.oceniFilm(7);
	d.oceniFilm(8);

	s.oceniFilm(5);
	s.oceniFilm(10);

	cout << d << endl;
	cout << s << endl;

	return 0;
}