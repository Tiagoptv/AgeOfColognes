#pragma once
#include "Caracteristica.h"

class PeleDura:public Caracteristica{
public:
	PeleDura(string nser);

	void fazCaracteristica(Mapa *m);

	~PeleDura();
};

