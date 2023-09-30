#include <stdio.h>

int main(void)
{
    int first;
    int second;

    printf("Type first number: ");
    scanf("%d", &first);
    printf("Type second number: ");
    scanf("%d", &second);

    if (first < second) 
    {
    printf("Your first number is smaller than your second number");
    } else if (first > second) {
        printf("Your first nuber is bigger than your second number");
    } else {
        printf("Your two numbers are the same");
    }
}

