#include "Agressao.h"


Agressao::Agressao(string nser): Caracteristica(nser){

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
	}
}

Agressao::~Agressao()
{
}
