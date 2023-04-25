#include "quadrilateral.h"

//Четырёхугольник
Quadrilateral::Quadrilateral() : Quadrilateral(50, 60, 70, 80, 10, 20, 30, 40) {
}

Quadrilateral::Quadrilateral(int A, int B, int C, int D, int a, int b, int c, int d) : Figure(4) {
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    fname = "Четырёхугольник";
    using namespace std::string_literals;
    if (sides != 4){
        std::string err = "колличество сторон не равно "s + std::to_string(sides);
        throw Figure_exeption(err);
    }else if((A+B+C+D) != 360){
        std::string err = "сумма углов "s + ((A+B+C+D) > 360?"больше"s:"меньше"s) + " 360 градусов"s;
        throw Figure_exeption(err);
    }
}

int Quadrilateral::get_A() {
    return A;
}
int Quadrilateral::get_B() {
    return B;
}
int Quadrilateral::get_C() {
    return C;
}
int Quadrilateral::get_D() {
    return D;
}

int Quadrilateral::get_a() {
    return a;
}
int Quadrilateral::get_b() {
    return b;
}
int Quadrilateral::get_c() {
    return c;
}
int Quadrilateral::get_d() {
    return d;
}

std::string Quadrilateral::getinfo() {
    using namespace std::string_literals;
    std::string out = Figure::getinfo() + "Стороны: a="s + std::to_string(get_a()) + " b="s + std::to_string(get_b()) + " c="s + std::to_string(get_c()) + " d="s + std::to_string(get_d()) + '\n'
        + "Углы: A="s + std::to_string(get_A()) + " B="s + std::to_string(get_B()) + " C="s + std::to_string(get_C()) + " D="s + std::to_string(get_D()) + '\n';
    return out;
}

bool Quadrilateral::check() {
    return ((A + B + C + D == 360) && (sides == 4));
}

std::string Quadrilateral::print(){
    using namespace std::string_literals;
    return (fname + "(стороны "s + std::to_string(get_a()) + ", "s + std::to_string(get_b()) + ", "s + std::to_string(get_c()) + ", "s + std::to_string(get_d()) +
        "; углы "s + std::to_string(get_A()) + ", "s + std::to_string(get_B()) + ", "s + std::to_string(get_C()) + ", "s + std::to_string(get_D()) + ") создан."s);
}