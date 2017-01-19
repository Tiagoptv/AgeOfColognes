#pragma once
#include "Caracteristica.h"
#include "Agressao.h"

class Espada: public Caracteristica{
	bool bonus;
public:
	Espada(string nser);

	void fazCaracteristica(Mapa *m, Agressao *a);

	//Funções de acesso
	int getNataques(Agressao *a);

	void setAtaque(Mapa *m, Agressao *a);

	bool verificaBonusAtaque(Mapa *m, Agressao *a);

	

	~Espada();
};

