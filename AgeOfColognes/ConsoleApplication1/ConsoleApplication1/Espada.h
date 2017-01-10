#pragma once
#include "Caracteristica.h"

class Espada: public Caracteristica{
	bool bonus;
	int nataques;
public:
	Espada(string nser);

	//Fun��es de acesso
	int getNataques()const;


	void fazAtuaCena(Mapa *m);

	void setAtaque(Mapa *m);

	bool verificaBonusAtaque(Mapa *m);

	

	~Espada();
};

