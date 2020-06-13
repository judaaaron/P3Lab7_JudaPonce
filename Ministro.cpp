#include "Ministro.h"

Ministro::Ministro(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Ministro::validacion(int i, int j, Pieza*** tablero){
	if(tablero[i][j] == NULL){
		if(i==this->fila-1 && j==this->columna-1){
			return true;
		}else if(i==this->fila-1 && j==this->columna+1){
			return true;
		}else if(i==this->fila && j==this->columna){
			return false;
		}else if(i==this->fila+1 && j==this->columna-1){
			return true;
		}else if(i==this->fila+1 && j==this->columna+1){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
}

Ministro::~Ministro()
{
}
