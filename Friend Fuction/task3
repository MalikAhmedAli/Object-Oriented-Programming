#include<iostream>
using namespace std;
class Shape{
private:
int radius;
int base;
int height;
public:
Shape()
{
base=0;
height=0;
radius = 0.0;
}

void set()
{
cout<<"WHAT IS THE VALUE OF RADIUS? \t";
cin>>radius;
cout<<"WHAT IS THE VALUE OF BASE? \t";
cin>>base;
cout<<"WHAT IS THE VALUE OF HEIGHT? \t";
cin>>height;
}

friend class Area;

};

class Area{
private:
float circle;
float triangle;
public:
void calculate_area_circle(Shape s1)
{
circle = 2*(22/7)*s1.radius;
cout<<"AREA OF CIRCLE IS \t"<<circle<<endl;
}

void calculate_area_triangle(Shape s1)
{
triangle=(1/2)*(s1.base)*(s1.height);
cout<<"AREA OF TRIANGLE IS \t"<<triangle<<endl;
}

};

int main()
{
Shape S;
Area A;
S.set();
A.calculate_area_circle(S);
A.calculate_area_triangle(S);

return 0;
}
