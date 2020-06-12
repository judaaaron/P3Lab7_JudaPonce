#ifndef PIEZA_H
#define PIEZA_H
#include <iostream>

class Pieza
{
	public:
		Pieza();
		Pieza(int, int, Pieza***, bool);
		char getChar();
		bool getJugador();
		bool movimientos(int,int);
		bool adentro(int,int);
		~Pieza();
	protected:
		Pieza*** tablero;
		int fila,columna;
		char caracter;
		bool jugador;
		virtual bool validacion(int fil, int colu)=0;
		
};

#endif
