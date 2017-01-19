#include "Espada.h"



Espada::Espada(string nser): bonus(true), Caracteristica(nser){

}

void Espada::fazCaracteristica(Mapa *m, Agressao *a) {
	setAtaque(m,a);
}

void Espada::setAtaque(Mapa *m, Agressao *a) {
	int ataque;

	if (verificaBonusAtaque(m,a)) {
		ataque = 3 + m->meuSer(nome)->getAtaque();
		m->meuSer(nome)->setAtaque(ataque);
	}
	else {
		ataque = 2 + m->meuSer(nome)->getAtaque();
		m->meuSer(nome)->setAtaque(ataque);
	}
}

bool Espada::verificaBonusAtaque(Mapa *m, Agressao *a) {
	if (getNataques(a) < 3) {
		return true;
	}
	else {
		return false;
	}
}

int Espada::getNataques(Agressao *a) { return a->getNataques(); }

Espada::~Espada()
{
}
