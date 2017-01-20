#ifndef INTERFACE_H
#define INTERFACE_H

class Comando;
class Mapa;
#include"Consola.h"
#include<string>
using namespace std;

class Interface
{
	Consola c;
	Comando *cmd;
	Mapa *m;

public:
	Interface();
	~Interface();

	void InicioJogo();

	void desenhaGrelhas(Consola &c);

	void Interface::escreveInformacao(string msg, int offset);



	void Interface::limpaEspacoComandos(Consola &c);

	void Interface::limpaEspacoInfo(Consola &c);
};

#endif