//Write a program in CPP to find the product of two  3 by 3 matrices
//entered by the user by overloading binary * operator
#include<iostream>
using namespace std;
class matrix
{
    int mat[3][3];
    public:
    void getdata()
    {
        cout<<"enter the matrix"<<endl
        ;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>mat[i][j];
            }
        }
    }
    void showdata()
    {
        cout<<"the product matrix is:"<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    matrix operator *(matrix M)
    {
        matrix temp;
        for (int i=0; i<3;i++)
        {
            for(int j=0; j<3;j++)
            {
                int sum=0;
                for(int k=0; k<3; k++)
                {
                    sum = sum + mat[i][k]*M.mat[k][j];
                }
                temp.mat[i][j]= sum;
            }
        }
        return temp;
    }
};
int main()
{
    matrix M1,M2,M3;
    M1.getdata();
    M2.getdata();
    M3=M1*M2;//M3 = M1.operator*(M2)
    M3.showdata();
    return 0;

}
