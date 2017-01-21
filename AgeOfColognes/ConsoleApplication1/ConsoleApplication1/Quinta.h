#pragma once
#ifndef QUINTA_H
#define QUINTA_H

#include"Edificio.h"
#include"Objeto.h"
#include "Consola.h"
#include <sstream>

class Quinta : public Edificio
{
	int moedasInstante;

public:
	//set
	void setMoedasInstante(int i);
	//get
	int getMoedasInstante() const;

	Quinta(int x, int y, int cor, int id);
	void desenha(Consola &c, int i, int j);
	~Quinta();

};

#endif