#pragma once
#include "triangle.h"
#include "exept.h"

//������������� �����������
class RightTriangle : public Triangle {
public:
    RightTriangle();
    RightTriangle(int A, int B, int C, int a, int b, int c);
    bool check();
};