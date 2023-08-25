#pragma once
#include "Figure.h"
#include <iostream>
class Quadrangle :public Figure
{
protected:
	int a, b, c, d, A, B, C, D;
	std::string name = "четырёхугольник";
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	virtual std::string GetName();
	void Sides() override;
	void Angles() override;
	void print() override;

};