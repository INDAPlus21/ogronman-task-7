
#include <stdio.h> // standard input/output library
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <conio.c>

int main()
{

    int board[100];

    board[0] = 0;
    for (int i = 1; i < 100; i++)
    {
        if (i == 60)
        {
            board[i] = 4;
        }
        else
        {
            board[i] = 1;
        }
    }

    printf("hellO???");
    printf("\e[1;1H\e[2J");
    for (int i = 0; i < 12; i++)
    {
        printf("\n");
    }
    printf("\t");
    for (int i = 0; i < 100; i++)
    {
        printf("%d", board[i]);
    }
    printf("\n");

    int difficulty = 250000;

    while (true)
    {

        int r = rand() % 10;
        int k = rand() % 20;
        int newTile = 1;
        if (r == k % 5 && board[99-1] != 4)
        {
            newTile = 4;
        }
        for (int i = 2; i < 100; i++)
        {
            board[i - 1] = board[i];
        }
        board[99] = newTile;
        printf("\e[1;1H\e[2J");
        sleep(0.2);
        if (board[0] != 0)
        {
            board[0]++;
        }
        else if (c_kbhit())
        {
            char ch = c_getch();
            if (ch == 32)
            {
                board[0] = -2;
            }
        }
        if (board[0] + board[1] == 4)
        {
            break;
        }
        for (int i = 0; i < 12; i++)
        {
            printf("\n");
        }
        if (board[0] != 0)
        {
            printf("\tP\n");
        }
        else
        {
            printf("\n");
        }
        printf("\t");
        for (int i = 0; i < 100; i++)
        {

            if (board[i] == 0)
            {
                printf("P");
            }
            else if (board[i] == 4)
            {
                printf("I");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
        difficulty -= 10;
        usleep(difficulty);
    }
    printf("Du förlorade ;(((");

    return (0);
}
