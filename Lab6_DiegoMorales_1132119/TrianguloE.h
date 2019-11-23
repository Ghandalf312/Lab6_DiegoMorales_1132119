#pragma once
#include "Poligono2.h"
class TrianguloE : public Poligono2
{
public:
	TrianguloE();
	~TrianguloE();

	double ObtenerArea(double lago);
	double ObtenerPerimetro(double lado);
};
