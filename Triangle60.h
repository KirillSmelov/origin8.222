#pragma once
#include"Triangle.h"
class Triangle60 :public Triangle
{
protected:
	std::string name = "равносторонний треугольник";
public:
	Triangle60(int a, int b, int c, int A, int B, int C);

	std::string GetName() override;

};