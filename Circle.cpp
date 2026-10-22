#include "Circle.h"
#include <cmath>


Circle::Circle(){
    this->S = Circle::computeS(Circle::getR());
    this->L = Circle::computeL(Circle::getR());
    this->r = 1;
}

Circle::Circle(double r){
    this->r.setRadius(r);
    this->L = computeL();
    this->S = computeS();
}

Circle::Circle( double S, double L, Radius r){
    this->S = S;
    this->L = L;
    this->r = r;
}

void Circle::setL(double lValue){
    this->L = lValue;
}

void Circle::setS(double sValue){
    this->S = sValue;
}

void Circle::setR(double rValue){
    this->r.setRadius(rValue);
}

double Circle::getR(){
    return this->r.getRadius();
}

double Circle::getS(){
    return this->S;
}

double Circle::getL(){
    return this->L;
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

std::istream& operator>>(std::istream& in, Circle& circle){
    double l1, s1, r1;
    if(in >> l1 >> s1 >> r1){
        circle.setL(l1);
        circle.setS(s1);
        circle.setR(r1);
    }

    return in;
};

std::ostream& operator<<(std::ostream& out, const Circle& circle){
    out << "Length: " << circle.L
        << ", area: " << circle.S
        <<", radius: "<< circle.r.getRadius();
    return out;
};