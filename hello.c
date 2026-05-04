#include <stdio.h>

void exchange(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;
    
    int *px = &x;
    int *py = &y;
    exchange(px, py);
    printf("x = %d, y = %d\n", x, y);
    printf("*px = %d, *py = %d\n", *px , *py);
    return 0;
}