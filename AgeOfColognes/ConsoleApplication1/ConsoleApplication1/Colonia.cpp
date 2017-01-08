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

Colonia::~Colonia()
{
}