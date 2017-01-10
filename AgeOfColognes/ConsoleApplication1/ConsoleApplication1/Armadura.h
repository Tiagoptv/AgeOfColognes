#pragma once
#include "Caracteristica.h"

class Armadura: public Caracteristica{
public:
	Armadura(string nser);

	void fazCaracteristica(Mapa *m);

	~Armadura();
};

