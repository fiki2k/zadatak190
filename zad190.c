/*  Program treba zbrojit dva kompleksna broja pomocu strukture.  */

#include <stdio.h>

struct kompleks
{
   int real, img;
};

int main()
{
   struct kompleks a, b, c;

   printf("Unesi prvi kompleksni broj : \n");
   printf("\nUnesi realni dio : ");
   scanf("%d", &a.real);
   printf("\nUnesi imaginarni dio : ");
   scanf("%d", &a.img);

   printf("Unesi drugi kompleksni broj : \n");
   printf("\nUnesi realni dio : ");
   scanf("%d", &b.real);
   printf("\nUnesi imaginarni dio : ");
   scanf("%d", &b.img);

   c.real = a.real + b.real;
   c.img = a.img + b.img;

   if ( c.img >= 0 )
      printf("\nSuma dva kompleksna broja je = %d + %di\n", c.real, c.img);
   else
      printf("\nSuma od dva kompleksna broja je = %d %di\n", c.real, c.img);

   return 0;
}
