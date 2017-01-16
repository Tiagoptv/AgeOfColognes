#include "Bandeira.h"



Bandeira::Bandeira(string nser): Caracteristica(nser){

}

void Bandeira::fazCaracteristica(Mapa *m, Ser* s) {

	m->getColonia(nome.at(0))->adicionaSer(s);    //falta alterar umas cenas

}

Bandeira::~Bandeira()
{
}
