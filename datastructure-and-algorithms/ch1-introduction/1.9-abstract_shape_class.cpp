#include <iostream>
#include <cmath>

class Shape{
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
};

class Circle: public Shape{
    private:
        double radius = 0;
    public:
        Circle();
        Circle(double r);

        virtual void setRadius(double r);
        virtual double area() override;
        virtual double perimeter() override;
};

Circle::Circle(){
    Circle(1);
}

Circle::Circle(double r){
    radius = r;
}

void Circle::setRadius(double r){
    radius = r;
}

double Circle::area(){
    return M_PI*std::pow(radius, 2);
}

double Circle::perimeter(){
    return 2*M_PI*radius;
}

// Class Rectancle: public Shape{};

int main(){
    double radius = 10;
    Shape *circle = new Circle(radius);
    std::cout<<"CIRCLE"<<std::endl;
    std::cout<<"Circle radius: "<<radius<<
        ". Area: "<<circle->area()<<
        ". Perimeter: "<<circle->perimeter()<<
        "."<<std::endl;
    return 0;
}


