#pragma once
#include "Caracteristica.h"

class Agressao: public Caracteristica 
{
public:
	Agressao(string nser);

	void Agressao::fazAtuaCena(Mapa *m);

	~Agressao();
};

