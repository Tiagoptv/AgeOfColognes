#pragma once
#include "Caracteristica.h"

class Faca: public Caracteristica{

public:
	Faca(string nser);

	void fazAtuaCena(Mapa *m);

	~Faca();
};

