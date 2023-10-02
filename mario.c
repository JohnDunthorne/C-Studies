// make blocks in a row

#include <stdio.h>

int main(void)
{
    int i;
    printf("how many blocks? ");
    scanf("%d", &i);
    for (i; i > 0; i--)
    {
        printf("?");
    }
    printf("\n");
}