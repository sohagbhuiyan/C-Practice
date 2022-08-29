#include<iostream>
using namespace std;

class Shape{
    public:
    double R1,R2;
    Shape(double R1,double R2){
        this->R1 = R1;
        this->R2 = R2;
    }
    virtual double area(){
        return 0;
    }
};
class triangle: public Shape{
    public:
    triangle(double R1, double R2) 
    :Shape(R1,R2){

    }
    double area(){
        return 0.5*R1*R2;
    }
};
class rectangle: public Shape{
    public:
    rectangle(double R1, double R2) 
    :Shape(R1,R2){

    }
    double area(){
        return R1*R2;
    }
};

int main()
{
    Shape *p;
    triangle t(10,20);
    rectangle r (10, 20);
    p = & t;
    cout<< "Triangle area is = "<< p->area()<<endl;;
    p= & r;
    cout<< "Rectangle area is = "<< p->area()<<endl;
    return 0;
}