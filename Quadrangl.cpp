#include "Quadrangle.h"
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :Figure()
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if (A + B + C + D != 360)
    {
        throw std::runtime_error("сумма углов не равна 360 ");
    }
}
std::string Quadrangle::GetName()
{
    return name;
}
void Quadrangle::Angles()
{
    std::cout << "стороны: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
}
void Quadrangle::Sides()
{
    std::cout << "углы: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
}
void Quadrangle::print()
{
    std::cout << GetName() << ":" << std::endl;
    Sides();
    Angles();
}