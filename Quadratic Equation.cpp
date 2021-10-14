#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <cmath>

std::pair<double, double> findRoots(double a, double b, double c)
{
    double discriminant = b*b - 4*a*c;
    double x1, x2;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
    }
    
    else if (discriminant == 0) {
        x1 = -b/(2*a);
        x2 = x1;
    }

    else {
        double i = -b/(2*a);
        double z =sqrt(-discriminant)/(2*a);
        x1 = i + z;
        x2 = i - z;
    }

    return std::make_pair(x1, x2);
    
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif