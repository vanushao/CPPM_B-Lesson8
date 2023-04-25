#include "equilateraltriangle.h"

//�������������� �����������
EquilateralTriangle::EquilateralTriangle() : EquilateralTriangle(30) {
}
EquilateralTriangle::EquilateralTriangle(int sides_abc) : EquilateralTriangle(60, 60, 60, sides_abc, sides_abc, sides_abc) {
}
EquilateralTriangle::EquilateralTriangle(int A, int B, int C, int a, int b, int c) : IsoscelesTriangle(A, B, C, a, b, c) {
    fname = "�������������� �����������";
    
    using namespace std::string_literals;
    if (A != 60 || B != 60 || C != 60){
        std::string err = "���� A("s + std::to_string(get_A()) + "), B("s +  std::to_string(get_B()) + ") � C("s +  std::to_string(get_C()) + ") �� �����."s;
        throw Figure_exeption(err);
    }else if(a != b || a != c){
        std::string err = "������� a("s + std::to_string(get_a()) + "), b("s +  std::to_string(get_b()) + ") � c("s +  std::to_string(get_c()) + ") �� �����."s;
        throw Figure_exeption(err);
    }
}
bool EquilateralTriangle::check() {
    return (Triangle::check() && a == b && A == 60 && B == 60);
}
