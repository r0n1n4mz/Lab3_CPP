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
        Circle(double r);
        Circle(double S, double L, Radius r);

        void setL(double lValue);
        void setS(double sValue);
        void setR(double rValue);
        
        double getR();
        double getS();
        double getL();

        double computeS();
        double computeS(double r);
        double computeL();
        double computeL(double r);


        friend std::istream& operator>>(std::istream& in, Circle& circle);
        friend std::ostream& operator<<(std::ostream& out, const Circle& circle);
};