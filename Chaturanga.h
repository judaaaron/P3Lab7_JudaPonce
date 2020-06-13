#ifndef CHATURANGA_H
#define CHATURANGA_H
#include <iostream>
#include<string>
#include"Infanteria.h"
#include"Torre.h"
#include"Caballo.h"
#include"Elefante.h"
#include"Ministro.h"
#include"Raja.h"

using namespace std;

class Chaturanga
{
	public:
		Chaturanga();
		void jugar();
		void llenarTablero();
		void printTablero();
		~Chaturanga();
	protected:
		Pieza*** tablero;
		int size=8;
};

#endif
