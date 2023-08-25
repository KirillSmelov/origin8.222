#include "Triangle90.h"
Triangle90::Triangle90(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (C != 90)
    {
        throw std::runtime_error("угол C всегда не равен 90");
    }
}
std::string Triangle90::GetName()
{
    return name;
}