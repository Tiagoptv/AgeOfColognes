#include "Agressao.h"


Agressao::Agressao(string nser): Caracteristica(nser){

}

string Agressao::verificaSerProximo(Mapa *m) {
	if (m->getUltimoObj(m->meuSer(nome)->getX(), m->meuSer(nome)->getY()))
		;
	string a;

	return a;
}

void Agressao::fazCaracterística(Mapa *m) {

	int retirarHp = m->meuSer(nome)->getAtaque();
	int hpInimigo;

}

Agressao::~Agressao()
{
}
