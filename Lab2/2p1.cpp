//Write a program in CPP to input the name, roll, marks and address of a
//student from the user and display the entered details using the concept of class and object
#include<iostream>
using namespace std;
class student
{
    char name[25], address[25];
    int roll, marks;
public:
    void getdata()
    {
        cout<<"enter the name,address,roll,marks of student in order:";
        cin>>name>>address>>roll>>marks;
    }
    void showdata()
    {
        cout<<"entered details are:"<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"address: "<<address<<endl;
        cout<<"roll: "<<roll<<endl;
        cout<<"marks: "<<marks<<endl;

    }
};

int main()
{
    student a;
    a.getdata();
    a.showdata();
    return 0;
}
