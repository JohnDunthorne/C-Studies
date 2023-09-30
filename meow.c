// make a cat meow based on user input

#include <stdio.h>

int main(void)
{
    int j = 0;
    int i;
    printf("How many meows?: ");
    scanf("%d", &i);
    while (j < i)
    {
        printf("meow\n");
        j ++; // this is like writing i += 1; ++ just means add 1, -- means subtract 1
    }
}


