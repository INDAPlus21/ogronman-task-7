
#include <stdio.h> // standard input/output library
#include <stdlib.h>

int main()
{
    int width;
    int height;

    scanf("%d", &width);
    scanf("%d", &height);

    char x[width][height];

    int elemLenH = 0;
    if (height % 2 == 0)
    {
        elemLenH = height / 2 - 1;
    }
    else
    {
        elemLenH = (height) / 2 - 1;
    }

    int elemLenW = 0;
    if (height % 2 == 0)
    {
        elemLenW = width / 2 - 1;
    }
    else
    {
        elemLenW = (width) / 2 - 1;
    }

    for (int j = height - 1; j > elemLenH; j--)
    {

        for (int i = width - 1; i > elemLenW; i--)
        {
            int length = 1;

            if (width - i < height - j)
            {
                length = width - i;
            }
            else
            {
                length = height - j;
            }

            x[i][j] = length;
            x[width - i - 1][j] = length;
            x[i][height - j - 1] = length;
            x[width - i - 1][height - j - 1] = length;
        }
    }



    for (int j = 0; j < width; j++)
    {
        for (int i = 0; i < height; i++)
        {
            //printf("%d", i);
            if (x[j][i] > 9)
            {
                printf(".");
            }
            else
            {
                printf("%d", x[j][i]);
            }
        }
            printf("\n");
    }

}
