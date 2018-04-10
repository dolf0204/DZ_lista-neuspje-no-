#pragma once

struct cvor;

class dvostrukaLista
{
public:
	typedef int podatak;
	dvostrukaLista();
	void push_back(podatak n);
	int begin();
	int end();

private:
	struct cvor {
		cvor* next;
		cvor* prev;
		podatak Podatak;
		cvor(podatak);
	};
	cvor* head;
	cvor* tail;
	int velicina;
	


	
};
