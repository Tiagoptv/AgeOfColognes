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


string Edificio::getInfo() {
	ostringstream os;

	os << "ID: " << id << "\tCusto: " << custo << "\tSaude: " << saude << "\tDefesa: " << defesa << endl;
	return os.str();
}

Edificio::~Edificio(){

}