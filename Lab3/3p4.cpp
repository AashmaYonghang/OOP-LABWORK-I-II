//Write a program in CPP to find the sum of two complex numbers using the concept of
//the operator overloading binary + operator using non-member/friend function
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

friend complex operator +(complex, complex);
};

complex operator +(complex c,complex d)
    {
        complex temp;
        temp.real = c.real + d.real;
        temp.imag = c.imag + d.imag;
        return temp;
    }
int main()
{
    complex c1(1,2),c2(1,1),c3;
    c3 = c1 + c2;//c3 = operator + (c1,c2)
    c3.showdata();
    return 0;

}


