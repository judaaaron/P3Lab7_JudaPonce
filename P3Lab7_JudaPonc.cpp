#include <iostream>
#include<string>
#include <stdlib.h>
#include"Infanteria.h"
#include"Torre.h"
#include"Caballo.h"
#include"Chaturanga.h"


using namespace std;


int main(int argc, char** argv) {
	int opcion;
	Chaturanga* charamusca = new Chaturanga();
	do{
		cout<<" Bienvenido al juego Chaturanga! o charamuska XD"<<endl;
		cout<<" Desea Juga?, presione 1..."<<endl;
		cin>>opcion;
		if(opcion!=1){
			cout<<"Saliendo..."<<endl;
			break;
		}else{
			charamusca->jugar();
		}
	}while(opcion==1);
	
	return 0;
}
