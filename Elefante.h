#ifndef ELEFANTE_H
#define ELEFANTE_H
#include "Pieza.h"
class Elefante : public Pieza
{
	public:
		Elefante(int , int , Pieza*** , char );
		bool validacion(int, int, Pieza***);
		~Elefante();
	protected:
};

#endif
