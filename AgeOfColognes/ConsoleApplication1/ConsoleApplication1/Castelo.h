#pragma once

#ifndef CASTELO_H
#define CASTELO_H

#include"Edificio.h"
#include"Objeto.h"
#include "Consola.h"
#include <sstream>

class Castelo : public Edificio
{

public:
	Castelo(int x, int y, int cor, int id);
	void desenha(Consola &c, int i, int j);
	~Castelo();

	//void curarMalta

	//void darResetNosContadoresDasCaracteristicas xD ex.espada, remedio...
};

#endif
