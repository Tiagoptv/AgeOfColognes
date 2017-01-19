#include "Colonia.h"



Colonia::Colonia(){}
Colonia::Colonia(char n) {
	nomePopulacao = n;
	nCastelos = 1;
	cor = 3; // ciano 
}

int Colonia::getMoedas() { return moedas; }
char Colonia::getNome() { return nomePopulacao; }
int Colonia::getCor() { return cor; }

Ser* Colonia::getSer(int id) {
	for (unsigned int i; i < seres.size(); i++) {
		if (id == seres[i]->getID())
			return seres[i];
	}
}

void Colonia::adicionaSer(Ser *s) {
	seres.push_back(s);
}

void Colonia::adicionaEdificio(Edificio &e) {
	if (e.getNome().at(1) = 'ec')
		nCastelos++;

	edificios.push_back(&e);
}

void Colonia::setMoedas(int num){
	moedas = num;
}

Ser* Colonia::getUnidade(string n) {
	for (unsigned int i = 0; i < seres.size(); i++)
		if (seres[i]->getNome() == n)
			return seres[i];

	return NULL;
}

Colonia::~Colonia()
{
}
