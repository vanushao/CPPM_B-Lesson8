#pragma once
#include <stdexcept>
#include <string>

class Figure_exeption: public std::domain_error{
public:
    Figure_exeption();
    Figure_exeption(const std::string &message);
private:
    std::string message;
};
