#pragma once
class Poligono
{
public:
	Poligono();
	~Poligono();
public:
	virtual double ObtenerArea(double largoLado) = 0;// Función virtual pura que hace a la clase abstracta
	virtual double ObtenerPerimetro(double largoLado);
};

