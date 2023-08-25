#include "Parallelogram.h" 
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, a, b, A, B, A, B)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if (a != c || b != d || A != C || B != D)
    {
        throw std::runtime_error("������� a,c � b,d ������� �� �����, ���� A,C � B,D ������� �� �����");

    }
}
std::string Parallelogram::GetName()
{
    return name;
}