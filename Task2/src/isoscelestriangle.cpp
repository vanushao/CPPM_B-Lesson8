#include "isoscelestriangle.h"

//�������������� �����������
IsoscelesTriangle::IsoscelesTriangle() : IsoscelesTriangle(50, 60, 10, 20) {
}
IsoscelesTriangle::IsoscelesTriangle(int angle_AC, int angle_B, int side_ac, int side_b) : IsoscelesTriangle(angle_AC, angle_B, angle_AC, side_ac, side_b, side_ac) {
}
IsoscelesTriangle::IsoscelesTriangle(int A, int B, int C, int a, int b, int c) : Triangle(A, B, C, a, b, c){
    fname = "�������������� �����������";
    using namespace std::string_literals;
    if (A != C){
        std::string err = "���� A("s + std::to_string(get_A()) + ") � C("s +  std::to_string(get_C()) + ") �� �����."s;
        throw Figure_exeption(err);
    }else if(a != c){
        std::string err = "������� a("s + std::to_string(get_a()) + ") � c("s +  std::to_string(get_c()) + ") �� �����."s;
        throw Figure_exeption(err);
    }
}
bool IsoscelesTriangle::check() {
    return (Triangle::check() && a == c && A == C);
}
