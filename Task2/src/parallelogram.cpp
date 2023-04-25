#include "parallelogram.h"

//Параллелограмм
Parallelogram::Parallelogram() : Parallelogram(30, 40, 20, 30) {
}
Parallelogram::Parallelogram(int angle_AC, int angle_BD, int sides_ac, int sides_bd)
    : Parallelogram(angle_AC, angle_BD, angle_AC, angle_BD, sides_ac, sides_bd, sides_ac, sides_bd) {
    
}
Parallelogram::Parallelogram(int A, int B, int C, int D, int a, int b, int c, int d) : Quadrilateral(A, B, C, D, a, b, c, d){
    fname = "Параллелограмм";
    using namespace std::string_literals;
    if (a!=c || b!=d){
        std::string err;
        if (a!=c && b!=d){
            err = "все стороны попарно не равны a("s + std::to_string(get_a()) + "), b("s + std::to_string(get_b()) + "), c("s + std::to_string(get_c()) +
                "), d("s + std::to_string(get_d()) + ")";
        }else if(a!=c){
            err = "стороны a("s + std::to_string(get_a()) + ") и c("s + std::to_string(get_c()) + ") попарно не равны"s;
        }else{
            err = "стороны b("s + std::to_string(get_b()) + ") и d("s + std::to_string(get_d()) + ") попарно не равны"s;
        }
        throw Figure_exeption(err);
    }else if(A!=C || B!=D){
        std::string err;
        if (A!=C && B!=D){
            err = "все углы попарно не равны A("s + std::to_string(get_A()) + "), B("s + std::to_string(get_B()) + "), C("s + std::to_string(get_C()) +
                "), D("s + std::to_string(get_D()) + ")";
        }else if(A!=C){
            err = "углы A("s + std::to_string(get_A()) + ") и C("s + std::to_string(get_C()) + ") попарно не равны"s;
        }else{
            err = "углы B("s + std::to_string(get_B()) + ") и D("s + std::to_string(get_D()) + ") попарно не равны"s;
        }
        throw Figure_exeption(err);
    }
}
bool Parallelogram::check() {
    return (Quadrilateral::check() && a == c && b == d && A == C && B == D);
}