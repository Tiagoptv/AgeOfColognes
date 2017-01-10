#include "Agressao.h"

<<<<<<< HEAD


Agressao::Agressao(string nser): Caracteristica(nser){

}

string Agressao::verificaSerProximo(Mapa *m) {
	if (m->getUltimoObj(m->meuSer(nome)->getX(), m->meuSer(nome)->getY()))
		;
=======
Agressao::Agressao(string nser): Caracteristica(nser)
{
}

void Agressao::fazAtuaCena(Mapa *m) {

	int retirarHp = m->meuSer(nome)->getAtaque();
	int hpInimigo;

>>>>>>> 19a0e6d0d4612122dcc3a0718ad47bc8a68d2e57
}

Agressao::~Agressao()
{
}
