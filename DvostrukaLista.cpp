#include "dvostrukaLista.h"

dvostrukaLista::dvostrukaLista()
{
	head = nullptr;
	tail = nullptr;

	velicina = 0;
}

void dvostrukaLista::push_back(podatak n)
{
	cvor* temp = new cvor(n);

	if (tail == nullptr)
	{
		head = tail = temp;
	}
	else
	{
		tail->next = temp;
		head->prev = tail;
		tail = temp;
	}
	velicina++;


}

int dvostrukaLista::begin()
{
	return head->Podatak;
}

int dvostrukaLista::end()
{
	return tail->Podatak;
}



dvostrukaLista::cvor::cvor(podatak a)
{
	Podatak = a;
	next = prev = nullptr;

}


