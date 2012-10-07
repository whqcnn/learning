#include "mines.h"

void number(struct stone mines[][10])
{
    int x = 0;
    int y = 0;
    for (y = 0; y < 10; ++y)
    {
        for (x = 0; x < 10; ++x)
        {
            if (mines[x][y].value == -1) {
                if (mines[x-1][y-1].value != -1)
                    mines[x-1][y-1].value += 1;
                if (mines[x-1][y].value != -1)
                    mines[x-1][y].value += 1;
                if (mines[x-1][y+1].value != -1)
                    mines[x-1][y+1].value += 1;
                if (mines[x][y-1].value != -1)
                    mines[x][y-1].value += 1;
                if (mines[x][y+1].value != -1)
                    mines[x][y+1].value += 1;
                if (mines[x+1][y-1].value != -1)
                    mines[x+1][y-1].value += 1;
                if (mines[x+1][y].value != -1)
                    mines[x+1][y].value += 1;
                if (mines[x+1][y+1].value != -1)
                    mines[x+1][y+1].value += 1; }
        }
    }
}
