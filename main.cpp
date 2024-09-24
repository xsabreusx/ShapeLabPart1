#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

int main(){


}

class Shapes {

virtual double getPerimeter()=0;
virtual double getArea()=0;

};

class Circle: public Shapes {
public:
Circle(int radius){
radius_ = radius;
}

double getPerimeter() {
    double Perimeter = 6.28*radius_; 
    return Perimeter;   
}

double getArea() {
    double Area = 3.14*(radius_^2);
    return Area;
}

private:
int radius_ = 0;


};

class RTriangle : public Shapes {
public:
RTriangle(int length, int width){
    length_ = length;
    width_ = width;
}

double getPerimeter(){
    double Perimeter = length_ + width_ + (sqrt((length_^2) +(width_^2)));
    return Perimeter;
}

double getArea(){
    double Area = .5*length_*width_;
    return Area;
}

private:
int length_ = 0;
int width_ = 0;

};

class Rectangle : public Shapes {
public:
Rectangle(int length, int width){
    length_ = length;
    width_ = width;
}

double getPerimeter(){
    double Perimeter = (2*length_) + (2*width_);
    return Perimeter;
}

double getArea(){
    double Area = length_*width_;
    return Area;
}

private:
int length_ = 0;
int width_ = 0;
};