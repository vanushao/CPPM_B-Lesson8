#pragma once
#include "quadrilateral.h"
#include "exept.h"

//ֿאנאככוכמדנאלל
class Parallelogram : public Quadrilateral {
public:
    Parallelogram();
    Parallelogram(int angle_AC, int angle_BD, int sides_ac, int sides_bd);
    Parallelogram(int A, int B, int C, int D, int a, int b, int c, int d);
    bool check();
};
