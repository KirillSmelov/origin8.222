#include"Recangle.h" 
Recangle::Recangle(int a, int b, int c, int d, int A, int B, int C, int D) :Parallelogram(a, b, a, b, 90, 90, 90, 90)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if (a != c || b != d || A != 90 || B != 90 || C != 90 || D != 90)
    {
        throw std::runtime_error("стороны a,c и b,d попарно не  равны, все углы не равны 90");
    }
}
std::string Recangle::GetName()
{
    return name;
}