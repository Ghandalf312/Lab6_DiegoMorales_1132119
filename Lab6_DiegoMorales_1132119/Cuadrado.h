#pragma once
#include "Poligono.h"
class Cuadrado : public Poligono
{
public:
	Cuadrado();
	~Cuadrado();
public:
	double ObtenerArea(double largoLado);
	double ObtenerPerimetro(double largoLado);
};

