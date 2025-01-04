/*Create a class Polygon. Based on this class, derive two classes Rectangle and Triangle to
calculate area with necessary data members and member function.*/
#include <iostream>
using namespace std;

class Polygon
{
protected:
    double base;
    double height;

public:
    Polygon(double b, double h) : base(b), height(h) {}
    virtual double calculateArea()
    {
        return 0.0;
    }
};

class Rectangle : public Polygon
{
public:
    Rectangle(double length, double width) : Polygon(length, width) {}
    double calculateArea() override
    {
        return base * height;
    }
};

class Triangle : public Polygon
{
public:
    Triangle(double b, double h) : Polygon(b, h) {}
    double calculateArea() override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    double rectLength, rectWidth, triBase, triHeight;
    cout << "Enter the length of the rectangle: ";
    cin >> rectLength;
    cout << "Enter the width of the rectangle: ";
    cin >> rectWidth;

    cout << "Enter the base of the triangle: ";
    cin >> triBase;
    cout << "Enter the height of the triangle: ";
    cin >> triHeight;

    Rectangle rectangle(rectLength, rectWidth);
    Triangle triangle(triBase, triHeight);

    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;
    cout << "Area of Triangle: " << triangle.calculateArea() << endl;

    return 0;
}
