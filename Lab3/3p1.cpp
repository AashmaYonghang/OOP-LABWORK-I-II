//Write a program in CPP to overload unary ++ for postfix and prefix increment
//operation on complex numbers using member function
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
        real = r;
        imag = i;
    }

    void showdata()
    {
     cout<<real<<"+i"<<imag<<endl;
    }
    complex operator ++()//pre
    {
        complex temp;
        temp.real = real++;
        temp.imag = imag++;
        return temp;
    }

complex operator ++(int)//post
    {
        complex temp;
        temp.real = real++;
        temp.imag = imag++;
        return temp;
    }


};


int main()
{
    complex c1(1,2),c2,c3;
    c3 = c1++;//c3 = c1.operator ++ (int)
    c2 = ++c1;//c2 = c1.operator ++()
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;

}




