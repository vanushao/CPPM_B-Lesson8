#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "righttriangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"
#include "exept.h"

int main() {
    std::setlocale(LC_ALL, "Russian");

    try{
        RightTriangle triangle(30, 110, 40, 20, 30, 20);
        std::cout << triangle.print() << std::endl;
    }catch(const Figure_exeption& err){
        std::cout << "Фигура не создана, причина: " << err.what() << std::endl; 
    }

    try{
        IsoscelesTriangle triangle(30, 120, 20, 30);
        std::cout << triangle.print() << std::endl;
    }catch(const Figure_exeption& err){
        std::cout << "Фигура не создана, причина: " << err.what() << std::endl; 
    }

    try{
        EquilateralTriangle triangle(60, 60, 60, 20, 30, 20);
        std::cout << triangle.print() << std::endl;
    }catch(const Figure_exeption& err){
        std::cout << "Фигура не создана, причина: " << err.what() << std::endl; 
    }

    try{
        Rhomb rhomb(70, 120, 70, 100, 60, 60, 60, 60);
        std::cout << rhomb.print() << std::endl;
    }catch(const Figure_exeption& err){
        std::cout << "Фигура не создана, причина: " << err.what() << std::endl; 
    }


    // Figure* figure;
    // Triangle triangle;
    // RightTriangle righttriangle_wrong(50, 60, 80, 10, 20, 30);
    // RightTriangle righttriangle_right;
    // IsoscelesTriangle isoscelestriangle_wrong;
    // IsoscelesTriangle isoscelestriangle_right(30, 120, 20, 30);
    // EquilateralTriangle equilateraltriangle;
    // Quadrilateral quadrilateral_wrong;
    // Quadrilateral quadrilateral_right(50, 70, 80, 160, 10, 15, 20, 30);
    // Rectangle rectangle;
    // Square square;
    // Parallelogram parallelogram_wrong;
    // Parallelogram parallelogram_right(80, 100, 15, 25);
    // Rhomb rhomb_wrong;
    // Rhomb rhomb_right(70, 110, 50);

    // std::cout << triangle << std::endl
    //     << righttriangle_wrong << std::endl
    //     << righttriangle_right << std::endl
    //     << isoscelestriangle_wrong << std::endl
    //     << isoscelestriangle_right << std::endl
    //     << equilateraltriangle << std::endl
    //     << quadrilateral_wrong << std::endl
    //     << quadrilateral_right << std::endl
    //     << rectangle << std::endl
    //     << square << std::endl
    //     << parallelogram_wrong << std::endl
    //     << parallelogram_right << std::endl
    //     << rhomb_wrong << std::endl
    //     << rhomb_right << std::endl;
}