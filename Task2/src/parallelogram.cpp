#include "parallelogram.h"

//��������������
Parallelogram::Parallelogram() : Parallelogram(30, 40, 20, 30) {
}
Parallelogram::Parallelogram(int angle_AC, int angle_BD, int sides_ac, int sides_bd)
    : Parallelogram(angle_AC, angle_BD, angle_AC, angle_BD, sides_ac, sides_bd, sides_ac, sides_bd) {
    
}
Parallelogram::Parallelogram(int A, int B, int C, int D, int a, int b, int c, int d) : Quadrilateral(A, B, C, D, a, b, c, d){
    fname = "��������������";
    using namespace std::string_literals;
    if (a!=c || b!=d){
        std::string err;
        if (a!=c && b!=d){
            err = "��� ������� ������� �� ����� a("s + std::to_string(get_a()) + "), b("s + std::to_string(get_b()) + "), c("s + std::to_string(get_c()) +
                "), d("s + std::to_string(get_d()) + ")";
        }else if(a!=c){
            err = "������� a("s + std::to_string(get_a()) + ") � c("s + std::to_string(get_c()) + ") ������� �� �����"s;
        }else{
            err = "������� b("s + std::to_string(get_b()) + ") � d("s + std::to_string(get_d()) + ") ������� �� �����"s;
        }
        throw Figure_exeption(err);
    }else if(A!=C || B!=D){
        std::string err;
        if (A!=C && B!=D){
            err = "��� ���� ������� �� ����� A("s + std::to_string(get_A()) + "), B("s + std::to_string(get_B()) + "), C("s + std::to_string(get_C()) +
                "), D("s + std::to_string(get_D()) + ")";
        }else if(A!=C){
            err = "���� A("s + std::to_string(get_A()) + ") � C("s + std::to_string(get_C()) + ") ������� �� �����"s;
        }else{
            err = "���� B("s + std::to_string(get_B()) + ") � D("s + std::to_string(get_D()) + ") ������� �� �����"s;
        }
        throw Figure_exeption(err);
    }
}
bool Parallelogram::check() {
    return (Quadrilateral::check() && a == c && b == d && A == C && B == D);
}