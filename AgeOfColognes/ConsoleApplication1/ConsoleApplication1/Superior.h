#pragma once
#include "Caracteristica.h"

class Superior: public Caracteristica{
public:
	Superior(string nser);

	void fazAtuaCena(Mapa *m);


	~Superior();
};

