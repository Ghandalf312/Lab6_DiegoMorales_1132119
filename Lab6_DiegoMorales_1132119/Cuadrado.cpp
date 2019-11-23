#include "Cuadrado.h"
#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
}

Cuadrado::~Cuadrado()
{
}

double Cuadrado::ObtenerArea(double largoLado) {
	return largoLado * largoLado;
}

double Cuadrado::ObtenerPerimetro(double largoLado)
{
	return largoLado * 4;
}