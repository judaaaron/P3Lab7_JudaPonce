#ifndef MINISTRO_H
#define MINISTRO_H

#include "Pieza.h"

class Ministro : public Pieza
{
	public:
		Ministro(int , int , Pieza*** , char );
		bool validacion(int, int, Pieza***);
		~Ministro();
	protected:
};

#endif
