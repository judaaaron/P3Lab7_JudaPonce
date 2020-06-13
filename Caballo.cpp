#include "Caballo.h"

Caballo::Caballo(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Caballo::validacion(int x, int y, Pieza*** tablero){
		if(tablero[x][y] == NULL){
		
		if(x==this->fila-2 && y==this->columna-1){
			return true;
		}else if(x==this->fila-1 && y==this->columna-2){
			return true;
		}else if(x==this->fila-2 && y==this->columna+1){
			return true;
		}else if(x==this->fila-2 && y==this->columna+1){
			return true;
		}else if(x==this->fila+1 && y==this->columna-2){
			return true;
		}else if(x==this->fila+2 && y==this->columna-1){
			return true;
		}else if(x==this->fila+1 && y==this->columna+2){
			return true;
		}else if(x==this->fila+2 && y==this->columna+1){
			return true;
		}
		else{
			return false;
		}
		
	}else{
		return false;
	}

}
Caballo::~Caballo()
{
}
