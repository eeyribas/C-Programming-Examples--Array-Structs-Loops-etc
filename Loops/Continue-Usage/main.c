#include <stdio.h>
#include <conio.h>

int main()
{
    for(int x = 1; x <= 10; x++){
        if(x == 5)
            continue;
        printf("%d\n", x);
    }
    printf("\n continue...\n");

    getch();
    return 0;
}
