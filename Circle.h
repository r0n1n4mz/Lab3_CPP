#include "Radius.h"
#include <iostream>
#include <stdexcept>
#include <string>

class CircleError : public std::runtime_error {
public:
    explicit CircleError(const std::string& msg) : std::runtime_error(msg) {}
};

class Circle {
    private:
        double S;
        double L;
        Radius r;
    public:
        Circle();
        Circle(double S, double L, Radius r);

        double getR();
        double computeS();
        double computeS(double r);
        double computeL();
        double computeL(double r);


        friend std::istream& operator>>(std::istream& in, const Circle& circle);
        friend std::ostream& operator<<(std::ostream& out, const Circle& circle);
};