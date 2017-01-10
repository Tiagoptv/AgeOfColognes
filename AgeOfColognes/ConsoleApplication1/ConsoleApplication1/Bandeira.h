#pragma once
#include "Caracteristica.h"

class Bandeira: public Caracteristica{
public:
	Bandeira(string nser);

	void fazCaracteristica(Mapa *m);

	~Bandeira();
};

