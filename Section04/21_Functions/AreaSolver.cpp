#include "AreaSolver.hpp"
#include <cmath>

AreaSolver::AreaSolver()
{
}

AreaSolver::~AreaSolver()
{
}

double area {0};
double AreaSolver::Circle(double radius = 3) // radius = 3 means having default parameter values
{
    area = 3.14*pow(radius,2);
    return area;
}
int Circle(int radius) // this is called function overloading
{
    area = 3.14*pow(radius,2);
    return (int)area;
}
double AreaSolver::Ellipse(double xradius, double yradius)
{
    area = 3.14*xradius*yradius;
    return area;
}
double AreaSolver::Triangle(double base, double height)
{
    area = base*height*0.5;
    return area;
}
double AreaSolver::Trapezoid(double a, double b, double height)
{
    area = ((a+b)/2)*height;
    return area;
}
double AreaSolver::Parallelogram(double base, double height)
{
    area = base*height;
    return area;
}
double AreaSolver::Rectangle(double base, double height)
{
    area = base*height;
    return area;
}
double AreaSolver::Square(double side)
{
    area = pow(side, 2);
    return area;
}