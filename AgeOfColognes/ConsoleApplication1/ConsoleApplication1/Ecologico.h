#pragma once
#include "Caracteristica.h"
#include "Ataca.h"

class Ecologico: public Ataca{
	string nalvo;
	vector<string> alvos;
	int nataques;
public:
	Ecologico(string nser);

	void verificaEdificioProximo(Mapa *m, vector <string> *alvos);

	void fazCaracterística(Mapa *m);

	int getNataques();

	bool dentroCastelo(Mapa *m);

	void resetNataques(Mapa *m);

	~Ecologico();
};

