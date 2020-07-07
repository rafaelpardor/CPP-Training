#include <iostream>
#include <cmath>

class Shape
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Circle : public Shape
{
private:
    double radius = 0;

public:
    Circle();
    Circle(double r);

    virtual void setRadius(double r);
    virtual double area() override;
    virtual double perimeter() override;
};

Circle::Circle()
{
    Circle(1);
}

Circle::Circle(double r)
{
    radius = r;
}

void Circle::setRadius(double r)
{
    radius = r;
}

double Circle::area()
{
    return M_PI * std::pow(radius, 2);
}

double Circle::perimeter()
{
    return 2 * M_PI * radius;
}

class Rectangle : public Shape
{
private:
    double width = 0, length = 0;

public:
    Rectangle();
    Rectangle(double w, double l);
    virtual void setWidth(double w);
    virtual void setLength(double l);
    virtual double area() override;
    virtual double perimeter() override;
};

Rectangle::Rectangle()
{
    Rectangle(1, 1);
}

Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
}

void Rectangle::setWidth(double w)
{
    width = w;
}
void Rectangle::setLength(double l)
{
    length = l;
}

double Rectangle::area()
{
    return width * length;
}

double Rectangle::perimeter()
{
    return 2 * (width + length);
}

int main()
{
    double radius = 10;
    Shape *circle_obj = new Circle(radius);
    std::cout << "CIRCLE" << std::endl;
    std::cout << "Circle radius: " << radius
              << " Area: " << circle_obj->area()
              << " Perimeter: " << circle_obj->perimeter()
              << "." << std::endl;

    double width = 2, length = 3;
    Shape *rectangle_obj = new Rectangle(width, length);
    std::cout << "RECTANGLE" << std::endl;
    std::cout << " Rectangle width: " << width
              << " Rectangle length: " << length
              << " Area: " << rectangle_obj->area()
              << " Perimeter: " << rectangle_obj->perimeter()
              << "." << std::endl;
    return 0;
}
