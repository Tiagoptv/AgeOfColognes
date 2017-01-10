#include "Faca.h"



Faca::Faca(string nser) : Caracteristica(nser){

}

void Faca::fazCaracteristica(Mapa *m) {
	int ataque = m->meuSer(nome)->getAtaque();

	ataque++;

	m->meuSer(nome)->setAtaque(ataque);
}

Faca::~Faca()
{
}
