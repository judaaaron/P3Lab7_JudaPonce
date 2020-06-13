#include "Chaturanga.h"

Chaturanga::Chaturanga()
{
}
void Chaturanga::jugar(){

	llenarTablero();
	printTablero();
	string move;
	int estoy1,estoy2, voy1, voy2;
	cout<<"Ingrese coordenadas jugador 1 (Piezas blancas): "<<endl;
	cin>>move;
	estoy1=move[1]-48; estoy2=move[0]-65; voy1=move[4]-68; voy2=move[3]-48;
	printTablero();
	if(move=="salir"){
		exit(0);
	}
	
}
void Chaturanga::printTablero(){
	cout<<"   A  B  C  D  E  F  G  H  "<<endl;
	cout<<"___________________________"<<endl;
	for(int i=0;i<this->size;i++){
		cout<<i<<" ";
		for(int j=0;j<this->size;j++){
			cout<<" ";
			cout<<tablero[i][j]->getChar();
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<"___________________________"<<endl;
}

void Chaturanga::llenarTablero(){
	tablero = new Pieza**[this->size];
	
	for(int i = 0;i<this->size;i++){
		tablero[i] = new Pieza*[this->size];
	}
	///instanciar size x size Piezas
	for(int i=0;i<this->size;i++){
		for(int j=0;j<this->size;j++){
			if(i<2){
				if(i==0){
					if(j==0 || j==7){
						tablero[i][j] = new Torre(i, j, tablero, 'T');
					}if(j==1 || j==6){
						tablero[i][j] = new Caballo(i, j, tablero,'C');
					}if(j==2 || j==5){
						tablero[i][j] = new Elefante(i, j, tablero,'E');
					}if(j==3){
						tablero[i][j] = new Raja(i, j, tablero,'R');
					}if(j==4){
						tablero[i][j] = new Ministro(i, j, tablero,'M');
					}
				}else if(i==1){
						tablero[i][j] = new Infanteria(i, j, tablero,'I');
					}
				}else if(i>=6){
					if(i==6){
						tablero[i][j] = new Infanteria(i, j, tablero,'L');
					}else if(i==7){
						if(j==0 || j==7){
							tablero[i][j] = new Torre(i, j, tablero,'Y');
						}else if(j==1 || j==6){
							tablero[i][j] = new Caballo(i, j, tablero,'O');
						}else if(j==2 || j==5){
							tablero[i][j] = new Elefante(i, j, tablero,'3');
						}else if(j==3){
							tablero[i][j] = new Ministro(i, j, tablero,'W');
						}else if(j==4){
							tablero[i][j] = new Raja(i, j, tablero,'P');
						}
					}
				}else{
					tablero[i][j] = new Raja(i, j, tablero,'.');
				}
		}
	}
	
	
}



Chaturanga::~Chaturanga()
{
}
