#include "Circle.h"
#include <stdexcept>
#include <limits>

int main(){

    Circle obj;
    std::cout<<obj<<std::endl;
    try{
        std::cout<<"Input the l, s, r only use enter after input for variables: ";
        if (std::cin>>obj) {
            std::cout << "It is a valid input for object: " << obj << '\n';
        } else {
            throw "Incorect input! Try to input double l, double s, double r.\n";
        }
        
    }
    catch( const char* error){
        std::cout<< error<<std::endl;
    }
    std::cout<<obj;
    std::cout<<"\nCompute length and area from your r(double)"<<std::endl;
    double r2;
    try{
        std::cout<<"Input radius: ";
  
        if(std::cin>> r2){
            std::cout<<"Valid: " << r2<<std::endl;
        }else {
            throw "Error input!";
        }
    }
    catch( const char* error){
        std::cout<<error<<std::endl;
    }
    Circle obj1(r2);
    std::cout<<obj1<<std::endl;
    std::cout<<"testing compute methods"<<std::endl;
    Circle obj3;
    obj3.setR(3.0);
    std::cout<<"Test S calculation from 3 radius: " << obj3.computeS() << std::endl;
    std::cout<<"Test L calculation from 3 radius: " << obj3.computeL() << std::endl;

}