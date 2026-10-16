#include "Circle.h"

int main(){
    Circle obj;
    std::cout<<obj<<std::endl;
    std::cout<<"Input the l, s, r only use enter after input for variables: ";
    std::cin>>obj;
    std::cout<<obj;
    std::cout<<"\nCompute length and area from your r(double)"<<std::endl;
    std::cout<<"Input radius: ";
    double r2;
    std::cin>> r2;
    Circle obj1(r2);
    std::cout<<obj1<<std::endl;
    std::cout<<"testing compute methods"<<std::endl;
    Circle obj3;
    obj3.setR(3.0);
    std::cout<<"Test S calculation from 3 radius: " << obj3.computeS() << std::endl;
    std::cout<<"Test L calculation from 3 radius: " << obj3.computeL() << std::endl;

}