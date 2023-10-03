#include <stdio.h>

int main(void)
{
    // get size of grind
    int n = get_size();

    // print grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        printf("How big?");
        scanf("%d", &n)
    }
    while (n < 1);
    return n;
}