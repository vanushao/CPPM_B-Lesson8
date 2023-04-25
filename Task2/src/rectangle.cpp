#include "rectangle.h"

//Прямоугольник
Rectangle::Rectangle() : Rectangle(10, 20) {
}
Rectangle::Rectangle(int sides_ac, int sides_bd) : Rectangle(90, 90, 90, 90, sides_ac, sides_bd, sides_ac, sides_bd) {
}
Rectangle::Rectangle(int A, int B, int C, int D, int a, int b, int c, int d) : Parallelogram (A, B, C, D, a, b, c, d){
    fname = "Прямоугольник";
    using namespace std::string_literals;
    if (A != 90 || B != 90 || C!= 90 || D != 90){
        std::string err = "углы не равны 90 градусов A("s + std::to_string(get_A()) + "), B("s + std::to_string(get_B()) 
            + "), C("s + std::to_string(get_C()) + ") и D("s + std::to_string(get_D()) + ").";
        throw Figure_exeption(err);
    }
}
bool Rectangle::check() {
    return (Parallelogram::check() && A == 90 && B == 90);
}

