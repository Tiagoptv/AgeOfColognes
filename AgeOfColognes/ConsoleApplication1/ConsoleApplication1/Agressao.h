#pragma once
#include "Caracteristica.h"
#include "Ataca.h"

class Agressao: public Ataca{
	string nalvo;
	vector<string> alvos;
public:
	Agressao(string nser);

	void verificaSerProximo(Mapa *m, vector<string> *alvos);

	void fazCaracter�stica(Mapa *m);

	int getNataques();

	bool dentroCastelo(Mapa *m);
	
	void resetNataques(Mapa *m);

	~Agressao();
};

