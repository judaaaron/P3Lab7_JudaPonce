#include "Pieza.h"

Pieza::Pieza ()
{

}

bool Pieza::adentro(int fi,int coll){
	return(fi>=0 && fi <8)&& (coll>=0 && coll<8);
}

char Pieza::getChar(){
	return this->caracter;
}

bool Pieza::getJugador(){
	return this->jugador;
}
bool Pieza::movimientos(int fil, int col){
	if(validacion(fil,col)){
		if(Pieza* p= tablero[fil][col]){
			delete p;
			tablero[fil][col]=NULL;
		}
		tablero[fil][col]= tablero[this->fila][this->columna];
		 tablero[this->fila][this->columna]=NULL;
		 this->fila=fil;
		 this->columna=col;
		 return true;
	}
	return false;
}

Pieza::Pieza(int f, int c, Pieza*** t, bool j){
	this->fila=f;
	this->columna=c;
	this->tablero=t;
	this->jugador=j;
}
Pieza::~Pieza()
{
}
