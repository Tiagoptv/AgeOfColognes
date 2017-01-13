#include "Ecologico.h"



Ecologico::Ecologico(string nser) : Ataca(nser)
{
}

void Ecologico::verificaEdificioProximo(Mapa *m, vector <string> *alvos) {
	vector <Objeto*> celula;
	int l, c;

	l = m->meuSer(nome)->getX();
	c = m->meuSer(nome)->getY();

	for (int i = 0; i < 8; i++) {
		switch(i){
		case 0: celula = m->getMapaCelula(l, c + 1); break;

		case 1: celula = m->getMapaCelula(l, c - 1); break;

		case 2: celula = m->getMapaCelula(l + 1, c); break;

		case 3: celula = m->getMapaCelula(l - 1, c); break;

		case 4: celula = m->getMapaCelula(l - 1, c + 1); break;

		case 5: celula = m->getMapaCelula(l - 1, c - 1); break;

		case 6: celula = m->getMapaCelula(l + 1, c - 1); break;

		case 7: celula = m->getMapaCelula(l + 1, c + 1); break;
		}


		for (unsigned int j = 0; j < celula.size(); j++) {
				if (celula[j]->getNome().at(0) != m->meuSer(nome)->getNome().at(0) && celula[j]->getNome().at(1) == 'e') {
				alvos->push_back(celula[j]->getNome());
			}
		}
	}
}

void Ecologico::fazCaracterística(Mapa *m) {
	Ser* serinimigo;
	int retirarHp = m->meuSer(nome)->getAtaque();
	int idinimigo, saudeinimigo;

	verificaEdificioProximo(m, &alvos);

	for (unsigned int i = 0; i < alvos.size(); i++) {
		idinimigo = m->extrairId(alvos.at(i));

		serinimigo = m->getColonia(alvos.at(i).at(0))->getSer(idinimigo);

		saudeinimigo = serinimigo->getSaude() - retirarHp;

		serinimigo->setSaude(saudeinimigo);

		nataques++;
	}
}

int Ecologico::getNataques() { return nataques; }

bool Ecologico::dentroCastelo(Mapa *m) {
	vector <Objeto*> celula;
	int l, c;

	l = m->meuSer(nome)->getX();
	c = m->meuSer(nome)->getY();

	celula = m->getMapaCelula(l, c);

	for (unsigned int i; i < celula.size(); i++) {
		if (celula[i]->getNome().at(1) == 'e' && celula[i]->getNome().at(1) == 'c') //Verificar se é este o formato do nome de um castelo
			return true;
	}

	return false;
}

void Ecologico::resetNataques(Mapa *m) {
	if (dentroCastelo(m)) {
		nataques = 0;
	}
}


Ecologico::~Ecologico()
{
}
