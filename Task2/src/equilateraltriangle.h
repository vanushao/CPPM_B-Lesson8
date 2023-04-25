#pragma once
#include "isoscelestriangle.h"
#include "exept.h"

//Равносторонний треугольник
class EquilateralTriangle : public IsoscelesTriangle {
public:
    EquilateralTriangle();
    EquilateralTriangle(int sides_abc);
    EquilateralTriangle(int A, int B, int C, int a, int b, int c);
    bool check();
};
