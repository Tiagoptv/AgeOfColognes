#pragma once

#ifndef SER_H
#define SER_H

#include <iostream>
#include "Objeto.h"
#include "Celula.h"
#include "Consola.h" 
#include <vector>

class Caracteristica;

class Ser: public Objeto{
	int id;
	static int idTotal;
	int saude, defesa, ataque;
	vector <Caracteristica*> perfil;
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

	//void adicionaPerfilSer();

	void move(Consola &c, int x, int y);

	void apaga(Consola &c, int i, int j);

	virtual void desenha(Consola &c, int i, int j);

	~Ser();
};

#endif

