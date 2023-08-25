#include "Triangle.h"
#include <iostream>
Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Figure()
{

    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (A + B + C != 180)
    {
        throw std::runtime_error("����� ����� �� ����� 180");
    }
}
std::string  Triangle::GetName()
{
    return name;
}
void Triangle::Sides()
{
    std::cout << "�������: " << "a = " << a << " b = " << b << " c = " << c << std::endl;

}
void Triangle::Angles()
{
    std::cout << "����: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
}
void Triangle::print()
{
    std::cout << GetName() << ":" << std::endl;
    Sides();
    Angles();
}