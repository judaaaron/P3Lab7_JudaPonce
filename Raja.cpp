#include "Raja.h"

Raja::Raja(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Raja::validacion(int x, int y, Pieza*** tablero){
		if(tablero[x][y] == NULL){
			if(x==this->fila-1 && y==this->columna-1){
				return true;
			}else if(x==this->fila-1 && y==this->columna){
				return true;
			}else if(x==this->fila-1 && y==this->columna+1){
				return true;
			}else if(x==this->fila && y==this->columna-1){
				return true;
			}else if(x==this->fila && y==this->columna){
				return false;
			}else if(x==this->fila && y==this->columna+1){
				return true;
			}else if(x==this->fila+1 && y==this->columna-1){
				return true;
			}else if(x==this->fila+1 && y==this->columna){
				return true;
			}else if(x==this->fila+1 && y==this->columna+1){
				return true;
			}else{
				return false;
			}
		}else{
			return false;
		}
	}
Raja::~Raja()
{
}
