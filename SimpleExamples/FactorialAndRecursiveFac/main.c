#include <stdio.h>

long Factorial(int n);
long Recursive(int n);

int main()
{
    int num;
    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    while(scanf("%d", &num) == 1){
        if (num < 0){
            printf("No negative numbers, please.\n");
        } else if (num > 12){
            printf("Keep input under 13.\n");
        } else {
            printf("loop: %d factorial = %ld\n", num, Factorial(num));
            printf("recursion: %d factorial = %ld\n", num, Recursive(num));
        }
        printf("Enter a value in the range 0-12 (q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

long Factorial(int n)
{
    long ans;
    for(ans = 1; n > 1; n--)
        ans *= n;

    return ans;
}

long Recursive(int n)
{
    long ans;
    if (n > 0)
        ans= n * Recursive(n - 1);
    else
        ans = 1;

    return ans;
}
