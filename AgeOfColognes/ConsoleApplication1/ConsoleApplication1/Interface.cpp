#include "Interface.h"
#include "Edificio.h"
#include "Castelo.h"
#include "Terreno.h"
#include "Consola.h"
#include "Ser.h"
#include "Comando.h"
#include "Mapa.h"

using namespace std;


Interface::Interface()
{
}

Interface::~Interface()
{
}


void Interface::InicioJogo()
{
	c.setTextSize(13, 13);
	c.setScreenSize(72, 92);

	desenhaGrelhas(c);

	//teste pra ver onde imprime as informacoes e ate onde apaga
	/*escreveInformacao("asdasddasd", 0);
	getch();
	limpaEspacoInfo(c);*/
	
	cmd = new Comando(c);
	cmd->modoJogo();

	c.gotoxy(20, 57);
}

void Interface::desenhaGrelhas(Consola & c)
{
	/******************* Delimita espaço de JOGO ****************/
	for (int i = 2; i<53; i++) { c.gotoxy(3, i);	cout << (char)179; }
	for (int i = 2; i<53; i++) { c.gotoxy(54, i);	cout << (char)179; }
	for (int i = 3; i<54; i++) { c.gotoxy(i, 2);	cout << (char)196; }
	for (int i = 3; i<54; i++) { c.gotoxy(i, 53);	cout << (char)196; }

	c.gotoxy(3, 2);		cout << (char)218;
	c.gotoxy(54, 2);		cout << (char)191;
	c.gotoxy(3, 53);		cout << (char)192;
	c.gotoxy(54, 53);	cout << (char)217;

	/******************* Delimita espaço de INFORMAÇOES ****************/
	c.gotoxy(59, 5);		cout << " Informacoes: ";
	for (int i = 0; i < 14; i++) { c.gotoxy(59 + i, 6); printf("%c", 196); }

	for (int i = 2; i<53; i++) { c.gotoxy(56, i);	cout << (char)179; }
	for (int i = 2; i<53; i++) { c.gotoxy(88, i);	cout << (char)179; }
	for (int i = 56; i<88; i++) { c.gotoxy(i, 2);	cout << (char)196; }
	for (int i = 56; i<88; i++) { c.gotoxy(i, 53);	cout << (char)196; }

	c.gotoxy(56, 2);			cout << (char)218;
	c.gotoxy(88, 2);			cout << (char)191;
	c.gotoxy(56, 53);		cout << (char)192;
	c.gotoxy(88, 53);		cout << (char)217;

	/******************* Delimita espaço de COMANDOS ****************/
	c.gotoxy(5, 57); cout << " Consola: ";
	for (int i = 0; i < 10; i++) { c.gotoxy(5 + i, 58); printf("%c", 196); }

	for (int i = 54; i<69; i++) { c.gotoxy(3, i);	cout << (char)179; }
	for (int i = 54; i<69; i++) { c.gotoxy(88, i);	cout << (char)179; }
	for (int i = 3; i<88; i++) { c.gotoxy(i, 54);	cout << (char)196; }
	for (int i = 3; i<88; i++) { c.gotoxy(i, 69);	cout << (char)196; }

	c.gotoxy(3, 54);		cout << (char)218;
	c.gotoxy(88, 54);	cout << (char)191;
	c.gotoxy(3, 69);		cout << (char)192;
	c.gotoxy(88, 69);	cout << (char)217;
}

void Interface::escreveInformacao(string msg, int offset)
{
	c.gotoxy(60, 10 + offset);	cout << msg;
}



void Interface::limpaEspacoComandos(Consola &c)
{
	for (int j = 57; j<68; j++) {
		c.gotoxy(20, j); cout << "                                                                   ";
	}
}

void Interface::limpaEspacoInfo(Consola &c)
{
	for (int j = 7; j<52; j++)
	{
		c.gotoxy(57, j); cout << "                              ";
	}
}