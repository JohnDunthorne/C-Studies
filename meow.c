// make a cat meow 3 times

#include <stdio.h>

int main(void)
{
    int counter = 0;
    while (counter < 3)
    {
        printf("meow\n");
        counter ++; // this is like writing counter += 1; ++ just means add 1, -- means subtract 1
    }
}


