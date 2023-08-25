#pragma once
#include"Triangle.h"
class Triangle90 :public Triangle
{
protected:
	std::string name = "прямоугольный треугольник";
public:
	Triangle90(int a, int b, int c, int A, int B, int C);

	std::string GetName() override;

};