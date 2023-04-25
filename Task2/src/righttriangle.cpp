#include "righttriangle.h"

//������������� �����������
RightTriangle::RightTriangle() : RightTriangle(30, 60, 90, 10, 20, 30) {
}
RightTriangle::RightTriangle(int A, int B, int C, int a, int b, int c) : Triangle(A, B, C, a, b, c) {
    fname = "������������� �����������";
    using namespace std::string_literals;
    if (C != 90){
        std::string err = "���� C �� ����� 90 ��������"s;
        throw Figure_exeption(err);
    }
}
bool RightTriangle::check() {
    return (Triangle::check() && C == 90);
}