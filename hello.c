#include <stdio.h>

int main(void)
{
   int x = 10;
   int y = 20;

   printf("Valeur de x : %d\n", x);
   printf("Adresse de x : %p\n", &x);
   printf("Valeur de y : %d\n", y);
   printf("Adresse de y : %p\n", &y);
   int *p = &x;
   *p = 50;
   printf("Nouvelle valeur de x : %d\n", x);

}  