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
	//bool visivel;  Para esconder zonas não exploradas
public:
	Celula(void);
	Celula(Objeto *cel);

	//Funções Modificadoras
	void setCelula(Objeto *c);
	//void setVisivel(bool vis);  Para esconder zonas não exploradas

	//Funções Acessoras
	vector<Objeto*> getCelula()const;
	//bool getVisivel()const ; 	Para esconder zonas não exploradas

	void removeObjeto(string n);

	~Celula();
};

#endif