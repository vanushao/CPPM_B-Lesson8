#pragma once
#include "rectangle.h"
#include "exept.h"

// вадрат
class Square : public Rectangle {
public:
    Square();
    Square(int sideABCD);
    Square(int A, int B, int C, int D, int a, int b, int c, int d);
    bool check();
};

