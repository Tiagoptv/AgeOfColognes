#include "Agressao.h"



Agressao::Agressao(string nser): Caracteristica(nser){

}

string Agressao::verificaSerProximo(Mapa *m) {
	if (m->getUltimoObj(m->meuSer(nome)->getX(), m->meuSer(nome)->getY()))
		;
}

Agressao::~Agressao()
{
}
