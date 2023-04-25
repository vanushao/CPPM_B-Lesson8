#include "square.h"

// вадрат
Square::Square() : Square(20) {
}
Square::Square(int sideABCD) : Square(90, 90, 90, 90, sideABCD, sideABCD, sideABCD, sideABCD) {
}
Square::Square(int A, int B, int C, int D, int a, int b, int c, int d) : Rectangle (A, B, C, D, a, b, c, d) {
    fname = " вадрат";
    using namespace std::string_literals;
    if (a!=b){
        std::string err = "стороны не равны a("s + std::to_string(get_a()) + "), b("s + std::to_string(get_b()) 
            + "), c("s + std::to_string(get_c()) + ") и d("s + std::to_string(get_d()) + ").";
        throw Figure_exeption(err);        
    }
}

bool Square::check() {
    return (Rectangle::check() && a == b);
}
