# include <stdio.h>

int main (void)
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = 34;

    for (int i = 0; i < 20; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }    
    }
    printf("Not found\n");
    return 1;    
}