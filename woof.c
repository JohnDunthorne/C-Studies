// make a dog woof with a for loop

#include <stdio.h>

int main(void)
{
    int j = 0;
    int i;
    printf("How many woofs?: ");
    scanf("%d", &i);
    for (i; i > j; j++)
    {
        printf("Woof\n");
    }
}
