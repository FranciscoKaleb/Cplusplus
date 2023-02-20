#ifndef AREASOLVER_HPP
#define AREASOLVER_HPP
#include <cmath>

class AreaSolver
{
public:
    AreaSolver();
    ~AreaSolver();

    double Circle(double radius);
    int Circle(int radius);
    double Ellipse(double xradius, double yradius);
    double Triangle(double base, double height);
    double Trapezoid(double a, double b, double height);
    double Parallelogram(double base, double height);
    double Rectangle(double base, double height);
    double Square(double side);
};

#endif // AREASOLVER_HPP
