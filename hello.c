#include <stdio.h>

int main(void)
{
    int nombres[5] = {4, 2, 10, 8, 6 };
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(nombres + i));
    }
    return 0;
}