#include "PoligonosRegulares.h"
PoligonosRegulares::PoligonosRegulares()
{
}


PoligonosRegulares::~PoligonosRegulares()
{
}


double PoligonosRegulares::ObtenerPerimetro(double NumLados, double Largolado)
{
	return (NumLados * Largolado);
}

double PoligonosRegulares::ObtenerArea(double NumLados, double largoLado, double apotema)
{
	return  ((NumLados * largoLado * apotema) / 2);
}