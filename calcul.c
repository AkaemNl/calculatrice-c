#include <stdio.h>

int main(void)
{
    float a;
    float b;
    int choix;

    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choisis : ");
    scanf("%d", &choix);

    printf("Premier nombre : ");
    scanf("%f", &a);
    printf("Deuxième nombre : ");
    scanf("%f", &b);

    if (choix == 1)
        printf("Résultat : %.2f\n", a + b);
    else if (choix == 2)
        printf("Résultat : %.2f\n", a - b);
    else if (choix == 3)
        printf("Résultat : %.2f\n", a * b);
    else if (choix == 4)
    {
        if (b != 0)
            printf("Résultat : %.2f\n", a / b);
        else
            printf("Erreur : Division par zéro !\n");
    }
    else
        printf("Choix invalide\n");

    return 0;
}