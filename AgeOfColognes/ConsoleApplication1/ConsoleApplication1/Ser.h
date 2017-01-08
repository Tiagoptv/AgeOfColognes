#pragma once

#ifndef SER_H
#define SER_H

#include <iostream>
#include "Objeto.h"
#include "Celula.h"
#include "Consola.h" 
#include <vector>

class Ser: public Objeto{
	int id;
	int saude, defesa, ataque;
public:
	Ser(void);
	Ser(int x, int y, int cor);

	int getID()const;
	int getSaude();
	int getDefesa();
	int getAtaque();

	void setID(int id);
	void setSaude(int s);
	void setDefesa(int d);
	void setAtaque(int a);

	void move(Consola &c, int x, int y);

	void apaga(Consola &c, int i, int j);

	virtual void desenha(Consola &c, int i, int j);

	~Ser();
};

#endif

