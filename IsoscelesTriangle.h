#pragma once
#include "Triangle.h"
class IsoscelesTriangle :public Triangle
{
protected:
    std::string name = "�������������� �����������";
public:
    IsoscelesTriangle(int a, int b, int c, int A, int B, int C);
    std::string GetName() override;

};