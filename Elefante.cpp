#include "Elefante.h"

Elefante::Elefante(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Elefante::validacion(int x, int y){
	return false;
}

Elefante::~Elefante()
{
}
