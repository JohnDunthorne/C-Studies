// make blocks in a row
// based on a user input

#include <stdio.h>

int main(void)
{
    int i;
    int j;
    printf("We are making a block\n");
    printf("how many blocks wide would you like it to be? ");
    printf("How many block high would you like it to be? ");
    scanf("%d %d", &i, &j);

    for (i; i > 0; i--)
    {
        for (j; j > 0; j--)
        {
            printf("#");
        }
        printf("\n");
    }
   
}