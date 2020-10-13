//Write a program in CPP to find the sum of two complex numbers using the OOP concept
#include<iostream>
using namespace std;
class complex
{
    float real= 0;
    float imag=0;
    public:
    complex()
    {
        real=0.0;
        imag=0.0;
    }
    complex(float r , float i)
    {
        real=r;
        imag=i;
    }

    showdata()
    {
        cout<<"entered complex number is: ";
        cout<<real<<" +i "<<imag;
    }

    complex addition(complex a)
    {
        complex temp;
        temp.real= real + a.real;
        temp.imag= imag + a.imag;
        return temp;
    }
};

int main()
{
    complex a(2,3), b(1,2),c;
    c = a.addition(b);
    c.showdata();
    return 0;

}

