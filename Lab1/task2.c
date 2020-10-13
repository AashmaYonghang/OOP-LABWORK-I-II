//WAP in C to input the name, roll, marks and address of n students entered by the user and display the
//entered details using the concept of structure
#include<stdio.h>

struct student
{
    int roll_no,marks;
    char name[25], address[25];
}s[100];

int main()
{
    int i,j,n;
    printf("Enter the no of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter student info \n");
        printf("name\t");
        scanf("%s",s[i].name);
        printf("roll_no\t");
        scanf("%d", &s[i].roll_no);
        printf("marks\t");
        scanf("%d",&s[i].marks);
        printf("address\t");
        scanf("%s",s[i].address);

    }


    for(j=0;j<n;j++)
    {
        printf("student %d details\n\n",j);

      printf("name = %s\n",s[j].name);
      printf("roll_no = %d\n", s[j].roll_no);
      printf("marks = %d",s[j].marks);
      printf("address = %s",s[j].address);
    }
    return 0;
}
