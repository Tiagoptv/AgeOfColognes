#include "Remedio.h"


	
Remedio::Remedio(string nser): Caracteristica(nser) {

}

void Remedio::fazAtuaCena(Mapa *m) {
	int saude = m->meuSer(nome)->getSaude();

	if (haRemedio) {
		if (saude <= 3)
			saude += 2;

		haRemedio = false;
	}

	m->meuSer(nome)->setSaude(saude);
}


Remedio::~Remedio()
{
}
