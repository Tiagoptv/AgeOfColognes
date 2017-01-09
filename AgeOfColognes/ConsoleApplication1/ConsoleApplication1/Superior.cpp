#include "Superior.h"



Superior::Superior(string nser): Caracteristica(nser){

}

void Superior::fazAtuaCena(Mapa *m) {
	int saude = m->meuSer(nome)->getSaude();
	
	saude++;

	m->meuSer(nome)->setSaude(saude);
}

Superior::~Superior()
{
}
