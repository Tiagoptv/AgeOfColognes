#pragma once
#include "Ser.h"
#include "Colonia.h"
#include "Mapa.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Mapa;
class Consola;

class Caracteristica{
protected:
	int cid;
	int custo, forca;
	string nome;
public:
	Caracteristica(string nome);

	virtual void fazAtuaCena(Mapa *m) = 0;  // virtual pura- vai ser chamada pelos filhos e aqui é abstrato

	~Caracteristica();
};

