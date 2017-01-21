#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Edificio.h"
using namespace std;

int Edificio::idtotal = 1;

Edificio::Edificio(int x, int y, int cor): Objeto(x,y,cor){

}

void Edificio::setID(int i) { id = i; }
void Edificio::setCusto(int c) { custo = c; }
void Edificio::setDefesa(int d) { defesa = d; }
void Edificio::setSaude(int s) { saude = s; }


int Edificio::getID() const {return id;}
int Edificio::getCusto() const {return custo;}
int Edificio::getSaude() const {return saude;}
int Edificio::getDefesa() const {return defesa;}
string Edificio::getInfo() const {
	ostringstream os;

	if(nome.at(2) == 'c')
		os << "ID: " << id << "\tCusto: " << custo << "\tSaude: " << saude << "/50\tDefesa: " << defesa << endl;
	else
		os << "ID: " << id << "\tCusto: " << custo << "\tSaude: " << saude << "/20\tDefesa: " << defesa << endl;

	return os.str();
}

Edificio::~Edificio(){

}