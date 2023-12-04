// Create a base class "Shape" and
// derived classes "Circle" and
// "Rectangle.'


#include<iostream>
using namespace std;

class Shape{
    public:
     string shap = "This is from shape";
};

class Circle : public Shape{
    public:
     string cir = "This is a Circle";
};
 
class Rectangle : public Circle{
    public:
    string rect="This is a rectangle";
};

// Above Inheritance is Multi-level Inheritance

int main()
{
    Rectangle obj;
    cout<<"from shape: "<<obj.rect;
    cout<<"\nfrom Circle: "<<obj.cir;
    cout<<"\nfrom Rectangle: "<<obj.rect;
    return 0;
}