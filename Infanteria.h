#ifndef INFANTERIA_H
#define INFANTERIA_H

#include "Pieza.h"

class Infanteria : public Pieza
{
	public:
		Infanteria(int, int, Pieza***, char);
		bool validacion(int, int);
		~Infanteria();
	protected:
};

#endif
