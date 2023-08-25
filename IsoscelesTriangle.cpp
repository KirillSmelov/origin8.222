#include "IsoscelesTriangle.h" 
IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, a, A, B, A)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (a != c || A != C)
    {
        throw std::runtime_error("стороны a и c не равны, углы A и C не равны");
    }
}
std::string IsoscelesTriangle::GetName()
{
    return name;
}