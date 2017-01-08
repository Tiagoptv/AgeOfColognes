#include "Caracteristica.h"



Caracteristica::Caracteristica(int cid){

}

void Caracteristica::selecionaCaracteristica(int cid, Colonia &c) {
	switch (cid) {
		case 1:
			bandeira(c);
			break;

		case 2:
			superior();
			break;

		case 3:
			peleDura();
			break;

		case 4:
			armadura();
			break;

		case 5:
			faca();
			break;

		case 6:
			espada();
			break;
	}
}

void Caracteristica::bandeira(Colonia &c) {
	c.adicionaSer(this);
}

void Caracteristica::superior() {
	int i;

	i = getSaude();
	i++;
	setSaude(i);
}

void Caracteristica::peleDura() {
	int i;

	i = getDefesa();
	i++;
	setDefesa(i);
}

void Caracteristica::armadura(){
	int i;

	i = getDefesa();
	i += 2;
	setDefesa(i);
}

void Caracteristica::faca(){
	int i;

	i = getAtaque();
	i++;
	setAtaque(i);
}

void Caracteristica::espada(){
	int i;

	i = getAtaque();
	i += 2;
	setAtaque(i);
}

Caracteristica::~Caracteristica()
{
}
