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

double Circle::computeS(double r){
    return (2* (2 * acos(0.0)) *r);
}

double Circle::computeL(double r){
    
}