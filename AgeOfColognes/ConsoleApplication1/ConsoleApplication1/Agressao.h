#pragma once
#include "Caracteristica.h"


class Agressao: public Caracteristica{
	string nalvo;
	vector<string> alvos;
public:
	Agressao(string nser);

	void verificaSerProximo(Mapa *m, vector<string> *alvos);

	void fazCaracterística(Mapa *m);

	~Agressao();
};

