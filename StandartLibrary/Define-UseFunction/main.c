#include <stdio.h>

#define SQUARE(X) X*X
#define PR(X)   printf("The result is %d.\n", X)

int main(void)
{
    int x = 4;
    printf("x = %d\n", x);

    int z = SQUARE(x);
    printf("Evaluating SQUARE(x): ");
    PR(z);
    printf("Evaluating SQUARE(x+2): ");
    PR(SQUARE(x + 2));
    printf("Evaluating 100/SQUARE(2): ");
    PR(100 / SQUARE(2));
    printf("x is %d.\n", x);
    printf("Evaluating SQUARE(++x): ");
    PR(SQUARE(++x));

    return 0;
}
