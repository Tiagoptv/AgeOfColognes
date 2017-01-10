#include "Espada.h"



Espada::Espada(string nser): bonus(true), nataques(0),Caracteristica(nser){

}

void Espada::fazCaracteristica(Mapa *m) {
	setAtaque(m);
}

void Espada::setAtaque(Mapa *m) {
	int ataque;

	if (verificaBonusAtaque(m)) {
		ataque = 3 + m->meuSer(nome)->getAtaque();
		m->meuSer(nome)->setAtaque(ataque);
	}
	else {
		ataque = 2 + m->meuSer(nome)->getAtaque();
		m->meuSer(nome)->setAtaque(ataque);
	}
}

bool Espada::verificaBonusAtaque(Mapa *m) {
	if (nataques < 3) {
		return true;
	}
	else {
		return false;
	}
}

int Espada::getNataques() const
{
	return nataques;
}

Espada::~Espada()
{
}
