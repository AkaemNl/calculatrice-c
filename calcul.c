#include <stdio.h>

void calculer(float a, float b)

{
    printf("Addition: %.2f\n", a + b);
    printf("Soustraction: %.2f\n", a - b);
    printf("Multiplication: %.2f\n", a * b);
    printf("Division: %.2f\n", a / b);
}
    int main (void)
    {
      float a;
      float b;
    printf("Entrez le premier nombre: ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre: ");
    scanf("%f", &b);
    calculer(a, b);
    return 0;
    }
 