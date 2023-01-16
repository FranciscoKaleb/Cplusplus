#include "AreaSolver.hpp"
#include <cmath>

AreaSolver::AreaSolver()
{
}

AreaSolver::~AreaSolver()
{
}
double AreaSolver::Circle(double radius)
{
    double area {0};

    area = 3.14*pow(radius,2);
    return area;
}
