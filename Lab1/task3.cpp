//WAP in CPP to find the area of circle and rectangle using the concept of function overloading. Task
#include<iostream>
#define PI 3.1414
using namespace std;
void area(int);
void area(int,int);
int main()
{
    int radius, length, breadth;
    cout<<"enter the radius of circle: ";
    cin>>radius;
    cout<<"enter the length and breadth: ";
    cin>>length>>breadth;
    area(radius);
    area(length,breadth);
    return 0;
}

void area(int a)
{
    cout<<"area of circle is: "<<(PI*a*a);
}
void area(int a,int b)
{
    cout<<"area of rectangle is: "<<(a*b);
}
