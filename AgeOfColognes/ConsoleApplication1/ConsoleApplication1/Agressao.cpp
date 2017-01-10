#include "Agressao.h"

Agressao::Agressao(string nser): Caracteristica(nser)
{
}

void Agressao::fazAtuaCena(Mapa *m) {

	int retirarHp = m->meuSer(nome)->getAtaque();
	int hpInimigo;

}

Agressao::~Agressao()
{
}
