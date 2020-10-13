//WAP in CPP to illustrate the concept of inline function
#include<iostream>
using namespace std;
inline int add_the_digit(int);//add the digits of num and return the resultant sum
int main()
{
    int n;
    cout<<"enter the number of your choice at least of 2 digits:"<<endl;
    cin>>n;
    while((n/10) !=0)
    {
       n = add_the_digit(n);
    }
    cout<<"finally the single digit obtained is  "<<n;
}
int add_the_digit(int a)
{
   int sum = 0, rem;
   while(a!=0)
   {
       rem = a % 10;
       sum = sum + rem;
       a = a/10;
   }
   return sum;//this is the sum of the digits of number n
}
