#include "triangle.h"

//Треугольник
Triangle::Triangle() : Triangle(50, 60, 70, 10, 20, 30) {
}

Triangle::Triangle(int A, int B, int C, int a, int b, int c) : Figure(3) {
    this->A = A;
    this->B = B;
    this->C = C;
    this->a = a;
    this->b = b;
    this->c = c;
    fname = "Треугольник";
    using namespace std::string_literals;
    if (sides != 3){
        std::string err = "колличество сторон не равно "s + std::to_string(sides);
        throw Figure_exeption(err);
    }else if((A+B+C) != 180){
        std::string err = "сумма углов "s + ((A+B+C) > 180?"больше"s:"меньше"s) + " 180 градусов"s;
        throw Figure_exeption(err);
    }
}

int Triangle::get_A() {
    return A;
}
int Triangle::get_B() {
    return B;
}
int Triangle::get_C() {
    return C;
}

int Triangle::get_a() {
    return a;
}
int Triangle::get_b() {
    return b;
}
int Triangle::get_c() {
    return c;
}

std::string Triangle::getinfo() {
    using namespace std::string_literals;
    std::string out = Figure::getinfo() + "Стороны: a="s + std::to_string(get_a()) + " b="s + std::to_string(get_b()) + " c="s + std::to_string(get_c()) + '\n'
        + "Углы: A="s + std::to_string(get_A()) + " B="s + std::to_string(get_B()) + " C="s + std::to_string(get_C()) + '\n';
    return out;
}

bool Triangle::check() {
    return ((A + B + C == 180) && (sides == 3));
}

std::string Triangle::print(){
    using namespace std::string_literals;
    return (fname + "(стороны "s + std::to_string(get_a()) + ", "s + std::to_string(get_b()) + ", "s + std::to_string(get_c()) + 
        "; углы "s + std::to_string(get_A()) + ", "s + std::to_string(get_B()) + ", "s + std::to_string(get_C()) + ") создан."s);
}