#pragma once
#include "parallelogram.h"
#include "exept.h"

//Ромб
class Rhomb : public Parallelogram {
public:
    Rhomb();
    Rhomb(int angle_AC, int angle_BD, int sides_abcd);
    Rhomb(int A, int B, int C, int D, int a, int b, int c, int d);
    bool check();
};
