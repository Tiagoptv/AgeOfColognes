#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include "Edificio.h"
#include "Castelo.h"
#include "Terreno.h"
#include "Consola.h"
#include "Ser.h"
#include "Comando.h"
#include "Mapa.h"
#include "Interface.h"

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main() {
	
	srand(time(NULL));
	Interface gui;

	gui.InicioJogo();
	return 0;
	
	//			CODIGO NAO UTILIZADO

	Consola c;
	Mapa e(c);
	Terreno a(0, 0);
	//Castelo f;
	Ser b(6, 6, 5);

	

	/*int i, j, k, l;

	e.setX(20);
	e.setY(20);
	e.preencheMapa(8, 8);
	e.imprimeMapa();

	i = a.getX();
	j = a.getY();

	k = b.getX();
	l = b.getY();

	f.desenha(c, 4, 4);

	//a.desenha(c, i, j);
	b.desenha(c, k, l);

	getch();

	b.apaga(c, k, l);
	e.imprimeMapa();
	f.desenha(c, 4, 4);
	b.move(c, 12, 12);
	c.gotoxy(0, 40);*/
	//---------------------//

	Comando d(c);
	Colonia g;

	string comando;

	cout << "CMD >> ";

	getline(cin, comando);

	d.separaComando(comando);

	cout << endl;

	
	d.castelo(g,6,6);
	
	string nperfil;

	cin >> nperfil;

	d.mkperfil(nperfil);
	
	
}