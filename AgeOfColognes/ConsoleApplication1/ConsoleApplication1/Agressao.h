#pragma once
#include "Caracteristica.h"

class Agressao: public Caracteristica{
	string nalvo;
	vector<string> alvos;
public:
	Agressao(string nser);

	string verificaSerProximo(Mapa *m);

	~Agressao();
};

