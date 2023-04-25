#pragma once
#include "figure.h"
#include <iostream>
#include "exept.h"

//Четырёхугольник
//Четырёхугольник
class Quadrilateral : public Figure {
public:
    Quadrilateral();
    Quadrilateral(int A, int B, int C, int D, int a, int b, int c, int d);

    int get_A();
    int get_B();
    int get_C();
    int get_D();
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    std::string getinfo();
    bool check();
    std::string print();

protected:
    int A, B, C, D; //angles
    int a, b, c, d; //sides lenght
};
