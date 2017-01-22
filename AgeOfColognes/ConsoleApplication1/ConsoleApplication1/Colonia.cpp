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
	return nullptr;
}

Edificio* Colonia::getEdificio(int id)
{
	for (unsigned int i; i < edificios.size(); i++) {
		if (id == edificios[i]->getID())
			return edificios[i];
	}
	return nullptr;
}

Torre * Colonia::getTorre(int id)
{
	for (unsigned int i; i < torres.size(); i++) {
		if (id == torres[i]->getID())
			return torres[i];
	}
	return nullptr;
}

Quinta * Colonia::getQuinta(int id)
{
	for (unsigned int i; i < quintas.size(); i++) {
		if (id == quintas[i]->getID())
			return quintas[i];
	}
	return nullptr;
}

void Colonia::adicionaSer(Ser *s) {
	seres.push_back(s);
}

void Colonia::adicionaEdificio(Edificio &e) {
	if (e.getNome().at(1) == 'e' && e.getNome().at(2) == 'c')
		nCastelos++;

	edificios.push_back(&e);
}

void Colonia::adicionaTorre(Torre & t)
{
	if (t.getNome().at(1) == 'e' && t.getNome().at(2) == 't')
		nTorres++;

	torres.push_back(&t);
}

void Colonia::adicionaQuinta(Quinta & q)
{
	if (q.getNome().at(1) == 'e' && q.getNome().at(2) == 't')
		nQuintas++;

	quintas.push_back(&q);
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
