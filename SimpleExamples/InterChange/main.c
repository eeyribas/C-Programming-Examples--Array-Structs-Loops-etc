#include <stdio.h>

void InterChange(int u, int v);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x , y);
    InterChange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void InterChange(int u, int v)
{
    printf("Originally u = %d and v = %d.\n", u , v);
    int temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}
