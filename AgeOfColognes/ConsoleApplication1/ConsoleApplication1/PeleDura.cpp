#include "PeleDura.h"



PeleDura::PeleDura(string nser) : Caracteristica(nser)
{
}

void PeleDura::fazCaracteristica(Mapa *m) {
	int defesa = m->meuSer(nome)->getDefesa();

	defesa++;

	m->meuSer(nome)->setDefesa(defesa);
}

PeleDura::~PeleDura()
{
}
