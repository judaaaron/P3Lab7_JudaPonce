#include "Caballo.h"

Caballo::Caballo(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Caballo::validacion(int fil, int col){
	return false;

}
Caballo::~Caballo()
{
}
