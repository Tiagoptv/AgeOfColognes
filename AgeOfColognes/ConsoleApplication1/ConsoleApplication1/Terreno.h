#pragma once
#ifndef TERRENO_H
#define TERRENO_H

class Objeto;

#include <iostream>
#include <string>
#include <vector>
#include "Objeto.h"
#include "Celula.h"
#include "Consola.h"

class Terreno : public Objeto{
public:
	Terreno(int x, int y);

	void desenha(Consola &c, int x, int y);

	~Terreno();
};

#endif