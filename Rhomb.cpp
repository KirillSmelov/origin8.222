#include "Rhomb.h"
Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, a, a, a, A, B, A, B)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if (a != c || a != b || a != d || b != c || b != d || c != d || A != C || B != D)
    {
        throw std::runtime_error("(��� ������� ��  �����, ���� A,C � B,D ������� �� �����");
    }
}
std::string Rhomb::GetName()
{
    return name;
}