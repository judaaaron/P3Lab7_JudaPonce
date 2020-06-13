#include "Elefante.h"

Elefante::Elefante(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Elefante::validacion(int x, int y, Pieza*** tablero){
	if(tablero[x][y] == NULL){
		
		if(x==this->fila-2 && y== this->columna-2){
			return true;
		}else if(x==this->fila-2 && y==this->columna+2){
			return true;
		}else if(x==this->fila && y==this->columna){
			return false;
		}else if(x==this->fila+2 && y==this->columna-2){
			return true;
		}else if(x==this->fila+2 && y==this->columna+2){
			return true;
		}else{
			return false;
		}		
	}else{
		return false;
	}
}

Elefante::~Elefante()
{
}
