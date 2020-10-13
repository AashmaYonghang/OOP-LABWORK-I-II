//Write a program in CPP to input the name, roll, marks and address of n students
//from the user and display the entered details using the concept of class and objects
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
        cout<<"name: "<<name<<endl;
        cout<<"address: "<<address<<endl;
        cout<<"roll: "<<roll<<endl;
        cout<<"marks: "<<marks<<endl;

    }
};

int main()
{
    int n;
    cout<<"enter the number of students: ";
    cin>>n;
    student s[n];
    for(int i=0; i<n;i++)
        s[i].getdata();
    for(int i=0; i<n;i++)
        s[i].showdata();
    return 0;
}

