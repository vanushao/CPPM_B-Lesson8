#pragma once
#include <iostream>
#include "exept.h"

class Figure {
public:
    Figure();
    Figure(unsigned sides);

    unsigned getSides();
    virtual std::string getinfo();
    virtual bool check();
    virtual std::string print() = 0;
protected:
    unsigned sides;
    std::string fname;
};

std::ostream& operator<<(std::ostream& out, Figure& t);