#include <iostream>
#include <stdlib.h>
#include"Infanteria.h"
#include"Torre.h"
#include"Caballo.h"
#include"Chaturanga.h"
#include <string>

using std::cout;
using std::cin;
using std::endl;


int main(int argc, char** argv) {
	int opcion;
	Chaturanga* charamusca = new Chaturanga();
	do{
		cout<<" Bienvenido al juego Chaturanga! "<<endl;
		cout<<" Desea Juga?, presione 1..."<<endl;
		cin>>opcion;
		charamusca->jugar();
		
		
	}while(opcion==1);
	
	return 0;
}
