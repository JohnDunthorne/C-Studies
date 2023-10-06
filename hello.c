# include <stdio.h>

int main(void)
{
    char name[] = "";

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello %s", name);
}