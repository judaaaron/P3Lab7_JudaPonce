#include "Infanteria.h"

Infanteria::Infanteria(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Infanteria::validacion(int x, int y, Pieza*** tablero){
	if (x == this->fila+1 && (y == this->columna || y == this->columna-1 || y == this->columna+1)){
		if (tablero[x][y] == NULL){
			this->fila = x;
			this->columna = y;
			return true;
		}
	}
}

Infanteria::~Infanteria()
{
}
