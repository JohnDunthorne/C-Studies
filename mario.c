// make blocks in a row
// based on a user input

#include <stdio.h>

int main(void)
{
    int i;
    printf("how many blocks? ");
    scanf("%d", &i);
    for (i; i > 0; i--)
    {
        printf("#");
    }
    printf("\n");
}