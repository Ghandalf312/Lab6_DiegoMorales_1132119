#pragma once
class Poligono3
{
public:
	Poligono3();
	~Poligono3();
public:
	virtual double ObtenerArea(double NumLados, double Largolado);// Funci�n virtual pura que hace a la clase abstracta
	virtual double ObtenerPerimetro(double NumLados, double largoLado, double apotema);
};

