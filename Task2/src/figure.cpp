#include "figure.h"

//������
Figure::Figure():Figure(0) {
}

Figure::Figure(unsigned sides) : sides(sides) {
    fname = "������";
}

unsigned Figure::getSides() {
    return sides;
}

std::string Figure::getinfo() {
    return (fname + ": " + '\n' + (check() ? "����������" : "������������") + '\n' + "���������� ������: " + std::to_string(sides) + '\n');
}

bool Figure::check() {
    return (sides == 0);
}


std::ostream& operator<<(std::ostream& out, Figure& t) {
    out << t.getinfo();
    return out;
}
