
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

	//sets
	void setID(int i);
	void setCusto(int c);
	void setSaude(int s);
	void setDefesa(int d);

	//gets
	int getX() const;
	int getY() const;
	int getID() const;
	int getCusto() const;
	int getSaude() const;
	int getDefesa() const;
	string getInfo();

	~Edificio();
};

#endif 