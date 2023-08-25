#pragma once
#include "Rhomb.h"
class Square :public Rhomb
{
protected:
	std::string name = "квадрат";
public:
	Square(int a, int b, int c, int d, int A, int B, int C, int D);
	std::string GetName() override;

};