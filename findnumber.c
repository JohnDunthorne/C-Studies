# include <stdio.h>

int main (void)
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int selection;
    printf("please select a number between 1 and 20: ");
    scanf("%i", &selection);

    for (int i = 0; i < selection; i++)
    {
        if (numbers[i] == selection);
        {
            printf("Found\n");
            return 0;
        }    
    }
    printf("Not found\n");
    return 1;    
}