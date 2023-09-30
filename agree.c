#include <stdio.h>

int main(void)
{
    char response;

    printf("Do you agree? Y or N: ");
    scanf("%c", &response);
    if (response == 'y' || response == 'Y')
    {
        printf("You agree!\n");
    }
    else if (response == 'n' || response == 'N')
    {
        printf("You do not agree\n");
    }
    else
    {
        printf("please enter Y on N\n");
    }
}