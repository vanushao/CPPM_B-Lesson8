#pragma once
#include "figure.h"
#include <iostream>
#include "exept.h"

//Треугольник
class Triangle : public Figure {
public:
    Triangle();
    Triangle(int A, int B, int C, int a, int b, int c);

    int get_A();
    int get_B();
    int get_C();

    int get_a();
    int get_b();
    int get_c();

    std::string getinfo();
    bool check();
    std::string print();
protected:
    int A, B, C; //angles
    int a, b, c; //sides lenght
};