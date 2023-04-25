#include "rhomb.h"

// ����
Rhomb::Rhomb() : Rhomb(30, 40, 30){
}
Rhomb::Rhomb(int angle_AC, int angle_BD, int sides_abcd) : Rhomb(angle_AC, angle_BD, angle_AC, angle_BD, sides_abcd, sides_abcd, sides_abcd, sides_abcd){
}
Rhomb::Rhomb(int A, int B, int C, int D, int a, int b, int c, int d) : Parallelogram (A, B, C, D, a, b, c, d){
    fname = "����";
    using namespace std::string_literals;
    if (a!=b){
        std::string err = "������� �� ����� a("s + std::to_string(get_a()) + "), b("s + std::to_string(get_b()) 
            + "), c("s + std::to_string(get_c()) + ") � d("s + std::to_string(get_d()) + ").";
        throw Figure_exeption(err);        
    }
}

bool Rhomb::check(){
    return (Parallelogram::check() && a == b);
}
