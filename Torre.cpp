#include "Torre.h"


Torre::Torre(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Torre::validacion(int i, int j, Pieza*** tablero){
	if(tablero[i][j] == NULL){
		if(i==this->fila || j==this->columna){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
}

Torre::~Torre()
{
}
