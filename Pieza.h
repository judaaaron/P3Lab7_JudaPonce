#ifndef PIEZA_H
#define PIEZA_H
#include <iostream>

class Pieza
{
	public:
		Pieza();
		Pieza(int, int, Pieza***);
		char getChar();
		bool getJugador();
		bool movimientos(int,int);
		bool adentro(int,int);
		virtual bool validacion(int fil, int colu, Pieza***)=0;
		~Pieza();
	protected:
		Pieza*** tablero;
		int fila,columna;
		char caracter;
		
		
};

#endif
