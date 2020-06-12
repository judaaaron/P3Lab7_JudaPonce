#include <iostream>
#include"Infanteria.h"
#include"Torre.h"
#include"Caballo.h"
#include"Chaturanga.h"

int main(int argc, char** argv) {
	int x, y;
	//char z;
	Chaturanga* charamusca = new Chaturanga();
	charamusca->llenarTablero();
	charamusca->printTablero();
	return 0;
}
