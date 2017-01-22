#pragma once

#ifndef COLONIA_H
#define COLONIA_H

#include <iostream>
#include <vector>
#include <string>
#include "Edificio.h"
#include "Ser.h"
#include "Torre.h"
#include "Quinta.h"
//class Ser;

class Colonia{
	int nCastelos=0, nTorres=0, nQuintas=0;
	int cor;
	vector<Edificio*> edificios;
	vector<Torre*> torres;
	vector<Quinta*> quintas;
	vector<Ser*> seres;
	char nomePopulacao;
	int moedas;
public:
	Colonia();
	Colonia(char n);

	int getMoedas();
	char getNome();
	int getCor();
	Ser* getSer(int id);
	Edificio* getEdificio(int id);
	Torre* getTorre(int id);
	Quinta* getQuinta(int id);

	void setMoedas(int num);

	void adicionaSer(Ser *u);
	void adicionaEdificio(Edificio &e);
	void adicionaTorre(Torre &t);
	void adicionaQuinta(Quinta &q);

	Ser* getUnidade(string n);

	~Colonia();
};

#endif
