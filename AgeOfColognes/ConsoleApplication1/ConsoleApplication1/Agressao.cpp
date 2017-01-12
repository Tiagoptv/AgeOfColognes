#include "Agressao.h"


Agressao::Agressao(string nser): Caracteristica(nser){

}

string Agressao::verificaSerProximo(Mapa *m) {
	vector <Objeto*> celula;
	Objeto* objeto;
	string nomeo;

	int l, c;

	l = m->meuSer(nome)->getX();
	c = m->meuSer(nome)->getY();

	celula = m->getMapaCelula(l,c+1);

	objeto = m->getUltimoObj(l, c + 1);

	nomeo = objeto->getNome();

	if (nomeo.at(0) != m->meuSer(nome)->getNome().at(0) && nomeo.at(1) == 'S') {
		return objeto->getNome();
	}
}

void Agressao::fazCaracterística(Mapa *m) {
	Ser* serinimigo;
	int retirarHp = m->meuSer(nome)->getAtaque();
	string ninimigo = verificaSerProximo(m);
	int idinimigo, saudeinimigo;

	idinimigo = m->extrairIdSer(ninimigo);

	serinimigo = m->getColonia(ninimigo.at(0))->getSer(idinimigo);

	saudeinimigo = serinimigo->getSaude() - retirarHp;

	serinimigo->setSaude(saudeinimigo);
}

Agressao::~Agressao()
{
}
