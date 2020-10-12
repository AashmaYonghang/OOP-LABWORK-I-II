#include <stdio.h>
struct complex
{
   int real, img;
};

int main()
{
   struct complex a, b, c;

   printf("Enter the first complex number a.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter the second complex number b.\n");
   scanf("%d%d", &b.real, &b.img);

   c.real = a.real + b.real;
   c.img = a.img + b.img;

   printf("Sum of the complex numbers: (%d) + (%di)\n", c.real, c.img);

   return 0;
}
