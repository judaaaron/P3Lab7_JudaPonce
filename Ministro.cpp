#include "Ministro.h"

Ministro::Ministro(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Ministro::validacion(int x, int y){
	return false;
}

Ministro::~Ministro()
{
}
