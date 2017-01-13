#include "Agressao.h"


Agressao::Agressao(string nser) : nataques(0), Caracteristica(nser) {

}

void Agressao::verificaSerProximo(Mapa *m, vector<string> *alvos) {
	vector <Objeto*> celula;
	Objeto* objeto;
	string nomeo;

	int l, c;

	for (int i = 0; i < 8; i++) {
		l = m->meuSer(nome)->getX();
		c = m->meuSer(nome)->getY();

		celula = m->getMapaCelula(l, c + 1);

		objeto = m->getUltimoObj(l, c + 1);

		nomeo = objeto->getNome();

		if (nomeo.at(0) != m->meuSer(nome)->getNome().at(0) && nomeo.at(1) == 'S') {
			alvos->push_back(objeto->getNome());
		}
	}
}

void Agressao::fazCaracterística(Mapa *m) {
	Ser* serinimigo;
	int retirarHp = m->meuSer(nome)->getAtaque();
	int idinimigo, saudeinimigo;
	
	verificaSerProximo(m,&alvos);

	for (unsigned int i = 0; i < alvos.size(); i++) {
		idinimigo = m->extrairIdSer(alvos.at(i));

		serinimigo = m->getColonia(alvos.at(i).at(0))->getSer(idinimigo);

		saudeinimigo = serinimigo->getSaude() - retirarHp;

		serinimigo->setSaude(saudeinimigo);

		nataques++;
	}
}

int Agressao::getNataques() { return nataques; }

bool Agressao::dentroCastelo(Mapa *m) {
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

void Agressao::resetNataques(Mapa *m) {
	if (dentroCastelo(m)) {
		nataques = 0;
	}
}

Agressao::~Agressao()
{
}
