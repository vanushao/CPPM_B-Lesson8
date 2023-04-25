#pragma once
#include "triangle.h"
#include "exept.h"

//Равнобедренный треугольник
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle();
    IsoscelesTriangle(int angle_AC, int angle_B, int side_ac, int side_b);
    IsoscelesTriangle(int A, int B, int C, int a, int b, int c);
    bool check();
};