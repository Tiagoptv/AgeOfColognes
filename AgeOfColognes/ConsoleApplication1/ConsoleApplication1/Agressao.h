#pragma once
#include "Caracteristica.h"


class Agressao: public Caracteristica{
	string nalvo;
	vector<string> alvos;
	int nataques;
public:
	Agressao(string nser);

	void verificaSerProximo(Mapa *m, vector<string> *alvos);

	void fazCaracterística(Mapa *m);

	int getNataques();

	bool dentroCastelo(Mapa *m);
	
	void resetNataques(Mapa *m);

	~Agressao();
};

