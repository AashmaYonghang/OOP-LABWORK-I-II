//Write a program in CPP to illustrate the concept of constructor(default,
//parameterized and copy constructor) and destructor taking class complex as an example
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
        cout<<"inside default contructor";
    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    complex(complex &c)//Explicit Copy Constructor
    {
        cout<<"Inside Copy Constructor"<<endl;
        real=c.real;
        imag=c.imag; }

    showdata()
    {
        cout<<"entered complex number is: ";
        cout<<real<<" +i "<<imag<<endl;
    }
    ~complex()
    {
        cout<<"inside destructor"<<endl;
    }
};

int main()
{
    complex a, b(1,2),c(b);
    a.showdata();
    b.showdata();
    c.showdata();
    return 0;

}
