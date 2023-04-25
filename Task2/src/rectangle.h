#pragma once
#include "parallelogram.h"
#include "exept.h"

//Прямоугольник
class Rectangle : public Parallelogram {
public:
    Rectangle();
    Rectangle(int sides_ac, int sides_bd);
    Rectangle(int A, int B, int C, int D, int a, int b, int c, int d);
    bool check();
};
