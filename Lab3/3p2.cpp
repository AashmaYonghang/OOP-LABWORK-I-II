//Write a program in CPP to overload unary ++ for postfix and prefix increment operation
//on complex numbers using non-member/friend function
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

friend complex operator ++(complex &);//pre
friend complex operator ++(complex &, int);//post
};

complex operator ++(complex &c)
    {
        complex temp;
        temp.real = c.real++;
        temp.imag = c.imag++;
        return temp;
    }

complex operator ++(complex &c,int)//post
    {
        complex temp;
        temp.real = c.real++;
        temp.imag = c.imag++;
        return temp;
    }

int main()
{
    complex c1(1,2),c2,c3;
    c3 = c1++;//c3 = operator ++ (c1 , int)
    c2 = ++c1;//c2 = operator ++(c1)
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;

}



