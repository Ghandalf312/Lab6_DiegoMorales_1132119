#include "TrianguloE.h"
#include <stdio.h>
#include <math.h>
TrianguloE::TrianguloE()
{
}


TrianguloE::~TrianguloE()
{
}

double TrianguloE::ObtenerArea(double Lado)
{
	return Lado*(sqrt(3.00)/4);
}

double TrianguloE::ObtenerPerimetro(double Lado)
{
	return Lado * 3;
}