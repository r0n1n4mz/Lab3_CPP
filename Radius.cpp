#include "Radius.h" 

Radius::Radius() {
    this->radius = 0;
}

Radius::Radius(double r) {
    this->radius = r;
}

double Radius::getRadius() const{
    return this->radius;
}

void Radius::setRadius(double r){
    this->radius = r;
}