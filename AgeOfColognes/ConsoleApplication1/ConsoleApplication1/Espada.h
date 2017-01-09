#pragma once
#include "Caracteristica.h"

class Espada: public Caracteristica{
	bool bonus;
	int nataques;
public:
	Espada(string nser);

	void fazAtuaCena(Mapa *m);

	void setAtaque(Mapa *m);

	bool verificaBonusAtaque(Mapa *m);

	~Espada();
};

