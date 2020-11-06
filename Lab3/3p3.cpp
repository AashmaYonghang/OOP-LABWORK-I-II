//Write a program in CPP to find the sum of two complex numbers using the concept of
//the overloading binary + operator using member function
#include<iostream>
using namespace std;
class complex
{
    float real,imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r,float i)
    {
        real = i;
        imag = r;
    }

    void showdata()
    {
     cout<<real<<"+i"<<imag<<endl;
    }

    complex operator +(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};


int main()
{
    complex c1(1,2),c2(1,1),c3;
    c3 = c1 + c2;//c3 = c1.operator + (c2)
    c3.showdata();
    return 0;

}


