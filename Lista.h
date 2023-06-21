#pragma once
#ifndef _lista_h_
#define _lista_h_
#include<exception>
using namespace std;

class GIzvanOpsega :public exception {
public:
	const char* what()const override {
		return "***Izvan opsega!";
	}
};

template<typename T>
class Lista
{
	struct Elem
	{
		T t;
		Elem* next;
		Elem(const T& tt) { t = tt, next = nullptr; }
	};
	Elem* prvi, * poslednji;
	mutable Elem* tek;
	int br;

	void brisi();
	void kopiraj(const Lista& l);
	void premesti(Lista& l) {
		prvi = l.prvi; poslednji = l.poslednji;
		tek = l.tek;
		l.prvi = l.poslednji = nullptr;
		l.br = br;
	}
public:
	Lista() { prvi = poslednji = tek = nullptr; br = 0; }
	Lista(const Lista& l) { kopiraj(l); }
	Lista(Lista&& l) { premesti(l); }
	Lista& operator=(const Lista& l) {
		if (this != &l) {
			brisi();
			kopiraj(l);
		}
		return *this;
	}
	Lista& operator=(Lista&& l) {
		if (this != &l) {
			brisi();
			premesti(l);
		}
		return *this;
	}

	int const dohvBroj()const { return br; }

	void operator+=(const T& t)  {
		poslednji = (!prvi ? prvi : poslednji->next) = new Elem(t);
		br++;
	}

	T& operator[](int i)const {
		if (i > br - 1) throw new GIzvanOpsega();
		int j = 0;
		Elem* temp = this->prvi;
		while (j < i) {
			temp = temp->next;
			j++;
		}
		return temp->t;
	}
	~Lista() { brisi(); }
};
template<typename T>
void Lista<T>::brisi() {
	while (prvi) {
		Elem* stari = prvi;
		prvi = prvi->next;
		delete stari;
	}
	poslednji = tek = nullptr;
}
template<typename T>
void Lista<T>::kopiraj(const Lista& l) {
	prvi = poslednji = tek = nullptr;
	for (Elem* temp = l.prvi; temp; temp = temp->next) {
		poslednji = (!prvi ? prvi : poslednji->next) = new Elem(temp->t);
	}
	br = l.br;
}
#endif // !_lista_h_
