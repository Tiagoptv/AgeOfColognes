#pragma once
#include "Ser.h"
#include "Colonia.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Caracteristica: public Ser{
	int cid;
public:
	Caracteristica(int cid);

	void selecionaCaracteristica(int cid, Colonia &c);

	//Funções das características
	void bandeira(Colonia &c);
	void superior();
	void peleDura();
	void armadura();
	void faca();
	void espada();

	
	~Caracteristica();
};

