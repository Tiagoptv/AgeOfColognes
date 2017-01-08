
#pragma once

#ifndef EDIFICIO_H
#define EDIFICIO_H


#include <iostream>
#include <string>
#include "Objeto.h"
using namespace std;

class Edificio:public Objeto{
	int custo, saude, defesa;
	int id;
	static int idtotal;
public:
	Edificio(int x, int y, int cor);

	void setID(int i);
	void setCusto(int c);
	void setSaude(int s);
	void setDefesa(int d);

	string getInfo();

	~Edificio();
};

#endif 