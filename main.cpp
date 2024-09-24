#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Shapes {
public:
virtual double getPerimeter() = 0;
virtual double getArea() = 0;

private:

};

class Circle: public Shapes {
public:
Circle(int radius){
radius_ = radius;
};

double getPerimeter() {
    double Perimeter = 6.28 * radius_; //2pi(r)
    return Perimeter;   
}

double getArea() {
    double Area = 3.14*(pow(radius_,2)); //pi(r)^2
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
    double Perimeter = length_ + width_ + (sqrt((pow(length_,2)) +(pow(width_,2)))); //Pythagorean Theorem + length and width
    return Perimeter;
}

double getArea(){
    double Area = .5 * length_ * width_; //(1/2)l*w
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
    double Perimeter = (2 * length_) + (2 * width_); //All sides added together
    return Perimeter;
}

double getArea(){
    double Area = length_ * width_; //length times width
    return Area;
}

private:
int length_ = 0;
int width_ = 0;
};


int main(){

Circle c1(1);
RTriangle t1(3,4);
Rectangle r1(1,2);

assert(c1.getArea()== 3.14 );
assert(c1.getPerimeter()== 6.28 );
assert(t1.getArea()== 6);
assert(t1.getPerimeter()== 12);
assert(r1.getArea()== 2);
assert(r1.getPerimeter()== 6);
cout << "\nAll passed";

}

