#pragma once
#include "Caracteristica.h"

class Espada: public Caracteristica{
	bool bonus;
	int nataques;
public:
	Espada(string nser);

<<<<<<< HEAD
	void fazCaracteristica(Mapa *m);
=======
	//Funções de acesso
	int getNataques()const;


	void fazAtuaCena(Mapa *m);
>>>>>>> 19a0e6d0d4612122dcc3a0718ad47bc8a68d2e57

	void setAtaque(Mapa *m);

	bool verificaBonusAtaque(Mapa *m);

	

	~Espada();
};

