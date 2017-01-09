#include "Armadura.h"



Armadura::Armadura(string nser): Caracteristica(nser){

}


void Armadura::fazAtuaCena(Mapa *m) {
	int defesa = m->meuSer(nome)->getDefesa();

	defesa += 2;

	m->meuSer(nome)->setDefesa(defesa);
}

Armadura::~Armadura()
{
}
