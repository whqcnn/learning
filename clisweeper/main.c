#include <stdio.h>
#include "mines.h"

int main()
{
    struct stone mines[10][10];
    init_mines(mines);
    place_mines(mines);
    number(mines);
    int x, y;
    scanf("%d%d", &x, &y);
    while (mines[x][y].value != -1)
    {
        mines[x][y].is_open = 1;
        print_mines(mines);
        scanf("%d%d", &x, &y);
    }
    if (mines[x][y].value == -1)
    {
        for (x = 0; x < 10; x++)
            for (y = 0; y < 10; y++)
                mines[x][y].is_open = 1;
        print_mines(mines);
    }
}
