//WAP in CPP to illustrate the concept of default arguments
#include<iostream>
using namespace std;
int sum(int a=0, int b=0, int c=0, int d=0)
{
    return (a+b+c+d);
}
int main()
{
    cout<<"sum of a =1, b=2 , c = 3, d=4"<<endl;//default arguments overwritten
    cout<<sum(1,2,3,4)<<endl;
    cout<<"sum of a =1, b=2 and c,d taking default arguments"<<endl;
    cout<<sum(1,2)<<endl;
    cout<<"sum of a = 3 and b,c,d taking default arguments"<<endl;
    cout<<sum(1)<<endl;
    cout<<"sum obtained taking all default arguments"<<endl;
    cout<<sum()<<endl;
    return 0;
}

