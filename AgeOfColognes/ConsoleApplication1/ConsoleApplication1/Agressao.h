#pragma once
#include "Caracteristica.h"

<<<<<<< HEAD
class Agressao: public Caracteristica{
	string nalvo;
	vector<string> alvos;
public:
	Agressao(string nser);

	string verificaSerProximo(Mapa *m);
=======
class Agressao: public Caracteristica 
{
public:
	Agressao(string nser);

	void Agressao::fazAtuaCena(Mapa *m);
>>>>>>> 19a0e6d0d4612122dcc3a0718ad47bc8a68d2e57

	~Agressao();
};

