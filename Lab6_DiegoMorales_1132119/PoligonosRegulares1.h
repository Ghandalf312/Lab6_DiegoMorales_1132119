#pragma once
#include "Poligono.h"
class PoligonosRegulares : public Poligono3
{
public:
	PoligonosRegulares();
	~PoligonosRegulares();
public:
	double ObtenerPerimetro(double NumLados, double Largolado);
	double ObtenerArea(double NumLados, double largoLado, double apotema);
};

