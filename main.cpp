#include <iostream>
#include <cassert>
using namespace std;

int main(){


}

class Shapes {

virtual void getPerimeter()=0;
virtual void getArea()=0;

};

class Circle: public Shapes {
public:
Circle(int radius){
radius_ = radius;
}

private:
int radius_ = 0;


};

class RTriangle : public Shapes {
public:

private:


};

class Rectangle : public Shapes {
public:

private:

};