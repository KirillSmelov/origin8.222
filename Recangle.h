#pragma once
#include"Parallelogram.h"
class Recangle :public Parallelogram
{
protected:
	std::string name = "прямоугольник";
public:
	Recangle(int a, int b, int c, int d, int A, int B, int C, int D);
	std::string GetName() override;
};