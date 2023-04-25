#include "equilateraltriangle.h"

//Равносторонний треугольник
EquilateralTriangle::EquilateralTriangle() : EquilateralTriangle(30) {
}
EquilateralTriangle::EquilateralTriangle(int sides_abc) : EquilateralTriangle(60, 60, 60, sides_abc, sides_abc, sides_abc) {
}
EquilateralTriangle::EquilateralTriangle(int A, int B, int C, int a, int b, int c) : IsoscelesTriangle(A, B, C, a, b, c) {
    fname = "Равносторонний треугольник";
    
    using namespace std::string_literals;
    if (A != 60 || B != 60 || C != 60){
        std::string err = "углы A("s + std::to_string(get_A()) + "), B("s +  std::to_string(get_B()) + ") и C("s +  std::to_string(get_C()) + ") не равны."s;
        throw Figure_exeption(err);
    }else if(a != b || a != c){
        std::string err = "стороны a("s + std::to_string(get_a()) + "), b("s +  std::to_string(get_b()) + ") и c("s +  std::to_string(get_c()) + ") не равны."s;
        throw Figure_exeption(err);
    }
}
bool EquilateralTriangle::check() {
    return (Triangle::check() && a == b && A == 60 && B == 60);
}
