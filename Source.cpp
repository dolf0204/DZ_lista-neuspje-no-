#include<iostream>
#include"dvostrukaLista.h"
#include<Windows.h>

using namespace std;

int main()

{
	dvostrukaLista lista;

	lista.push_back(6);
	lista.push_back(8);
	lista.push_back(10);

	for (auto it = lista.begin(); it != lista.end(); ++it)
	{
		cout << it << endl;
	}

	system("pause");
	return 0;

}
