#pragma once
#include "Caracteristica.h"

class Faca: public Caracteristica{

public:
	Faca(string nser);

	void fazCaracteristica(Mapa *m);

	~Faca();
};

