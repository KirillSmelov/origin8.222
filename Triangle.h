#pragma once
#include "Figure.h"
#include <iostream>
class Triangle :public Figure
{
protected:
	int a, b, c, A, B, C;
	std::string name = "треугольник";
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	virtual std::string GetName();
	void Sides() override;
	void Angles() override;
	void print() override;

};