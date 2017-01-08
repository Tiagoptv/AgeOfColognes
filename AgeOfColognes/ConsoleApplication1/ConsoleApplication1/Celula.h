#pragma once

#ifndef CELULA_H
#define CELULA_H

#include <iostream>
#include <string>
#include <vector>
#include "Objeto.h"
using namespace std;

class Objeto;

class Celula{
	vector<Objeto*> celula;
	//bool visivel;  Para esconder zonas n�o exploradas
public:
	Celula(void);
	Celula(Objeto *cel);

	//Fun��es Modificadoras
	void setCelula(Objeto *c);
	//void setVisivel(bool vis);  Para esconder zonas n�o exploradas

	//Fun��es Acessoras
	vector<Objeto*> getCelula()const;
	//bool getVisivel()const ; 	Para esconder zonas n�o exploradas

	void removeObjeto(string n);

	~Celula();
};

#endif