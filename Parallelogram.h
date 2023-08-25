#pragma once
#include "Quadrangle.h"
class Parallelogram :public Quadrangle
{
protected:
	std::string name = "ןאנאככוכמדנאלל";
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
	std::string GetName() override;

};