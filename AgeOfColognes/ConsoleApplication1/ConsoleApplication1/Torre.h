#pragma once
#ifndef TORRE_H
#define TORRE_H

#include"Edificio.h"
#include"Objeto.h"
#include "Consola.h"
#include <sstream>

class Torre : public Edificio
{

public:
	Torre(int x, int y, int cor, int id);
	void desenha(Consola &c, int i, int j);
	~Torre();

};

#endif