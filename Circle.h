#include "Radius.h"
#include <iostream>

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

        void printCircleinfo();

        friend std::istream& operator>>(std::istream& in, const Circle& circle);
        friend std::ostream& operator<<(std::ostream& out, const Circle& circle);
};