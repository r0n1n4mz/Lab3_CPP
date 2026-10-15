#include "Circle.h"
#include <cmath>


Circle::Circle(){
    this->S = Circle::computeS(Circle::getR());
    this->L = Circle::computeL(Circle::getR());
    this->r = 1;
}

Circle::Circle( double S, double L, Radius r){
    this->S = S;
    this->L = L;
    this->r = r;

}

double Circle::getR(){
    return this->r.getRadius();
}

double Circle::computeS(){
    double r = this->r.getRadius();
    return (r * r * (2 * acos(0.0)));
}

double Circle::computeS(double r){
    return (r*r * (2 * acos(0.0)) );
}

double Circle::computeL(double r){
    return (2* (2* acos(0.0)) * r);
}

double Circle::computeL(){
    double r = this->r.getRadius();
    return (2 * (2 * acos(0.0)) * r);
}

std::istream& operator>>(std::istream& in, const Circle& circle){
    if (!circle.sSet || !circle.lSet || !circle.rSet)
        throw CircleError("Cannot print: some fields are not set");

    std::cout << "Circle info" << std::endl;
    std::cout << "Value of S: " << circle.S << std::endl;
    std::cout << "Value of L: " << circle.L << std::endl;
    std::cout << "Value of R: " << circle.r.getRadius() << std::endl;
    return out;
};

std::ostream& operator<<(std::ostream& out, const Circle& circle){};