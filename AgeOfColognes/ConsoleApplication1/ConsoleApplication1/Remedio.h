#pragma once
#include "Caracteristica.h"

class Remedio: public Caracteristica
{
	bool haRemedio = true;

public:
	Remedio(string nser);

	void fazAtuaCena(Mapa *m);

	~Remedio();
};

