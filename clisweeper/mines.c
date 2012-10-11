#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mines.h"

void get_random_x_y(int *x, int *y)
{
    *x = (char)(drand48() * T);
    *y = (char)(drand48() * T);
}

void print_mines(struct stone mines[][T])
{
    int x = Z;
    int i = Z;
    int y = Z;
    for (y = Z; y < T; ++y)
    {
        for (x = Z; x < T; ++x)
        {
            if (mines[x][y].is_open)
            {
                if (mines[x][y].value == -1)
                    printf("x ");
                else
                    printf("%d ", mines[x][y].value);
            }
            else
            {
                i++;
                printf("■ ");
            }
        }
        printf("\n");
    }
    g = i;
}

void init_mines(struct stone mines[][T])
{
    int x = Z;
    int y = Z;
    for (x = Z; x < T; ++x)
    {
        for (y = Z; y < T; ++y)
        {
            mines[x][y].is_open = Z;
            mines[x][y].value = Z;
        }
    }
}

void place_mines(struct stone mines[][T])
{
    int x = Z;
    int y = Z;
    int i = Z;
    srand48(time(Z));
    for (i = Z; i < T; ++i)
    {
        get_random_x_y(&x, &y);
        if (mines[x][y].value == -1)
        {
            --i;
            continue;
        }
        else
        {
            mines[x][y].value = -1;
        }
    }
}

void number(struct stone mines[][T])
{
    int x = Z;
    int y = Z;
    for (y = Z; y < T; ++y)
    {
        for (x = Z; x < T; ++x)
        {
            if (mines[x][y].value == -1)
            {
                if (Z <= (x-1) && (x-1) < T && Z <= (y-1) && (y-1) < T
                    && mines[x-1][y-1].value != -1)
                    mines[x-1][y-1].value += 1;
                if (Z <= (x-1) && (x-1) < T && Z <= (y) && (y) < T
                    && mines[x-1][y].value != -1)
                    mines[x-1][y].value += 1;
                if (Z <= (x-1) && (x-1) < T && Z <= (y+1) && (y+1) < T
                    && mines[x-1][y+1].value != -1)
                    mines[x-1][y+1].value += 1;
                if (Z <= (x) && x < T && Z <= (y-1) && (y-1) < T
                    && mines[x][y-1].value != -1)
                    mines[x][y-1].value += 1;
                if (Z <= (x) && x < T && Z <= (y+1) && (y+1) < T
                    && mines[x][y+1].value != -1)
                    mines[x][y+1].value += 1;
                if (Z <= (x+1) && (x+1) < T && Z <= (y-1) && (y-1) < T
                    && mines[x+1][y-1].value != -1)
                    mines[x+1][y-1].value += 1;
                if (Z <= (x+1) && (x+1) < T && Z <= (y) && (y) < T
                    && mines[x+1][y].value != -1)
                    mines[x+1][y].value += 1;
                if (Z <= (x+1) && (x+1) < T && Z <= (y+1) && (y+1) < T
                    && mines[x+1][y+1].value != -1)
                    mines[x+1][y+1].value += 1;
            }
        }
    }
}

void pp(struct stone mines[][T], int x, int y)
{
    if (mines[x][y].value == Z)
    {
        mines[x][y].is_open = 1;
        if (Z <= (x-1) && (x-1) < T && Z <= (y-1) && (y-1) < T
            && mines[x-1][y-1].value != Z)
            mines[x-1][y-1].is_open = 1;
        if (Z <= (x-1) && (x-1) < T && Z <= (y) && (y) < T
            && mines[x-1][y].value != Z)
            mines[x-1][y].is_open = 1;
        if (Z <= (x-1) && (x-1) < T && Z <= (y+1) && (y+1) < T
            && mines[x-1][y+1].value != Z)
            mines[x-1][y+1].is_open = 1;
        if (Z <= (x) && (x) < T && Z <= (y-1) && (y-1) < T
            && mines[x][y-1].value != Z)
            mines[x][y-1].is_open = 1;
        if (Z <= (x) && (x) < T && Z <= (y+1) && (y+1) < T
            && mines[x][y+1].value != Z)
            mines[x][y+1].is_open = 1;
        if (Z <= (x+1) && (x+1) < T && Z <= (y-1) && (y-1) < T
            && mines[x+1][y-1].value != Z)
            mines[x+1][y-1].is_open = 1;
        if (Z <= (x+1) && (x+1) < T && Z <= (y) && (y) < T
            && mines[x+1][y].value != Z)
            mines[x+1][y].is_open = 1;
        if (Z <= (x+1) && (x+1) < T && Z <= (y+1) && (y+1) < T
            && mines[x+1][y+1].value != Z)
            mines[x+1][y+1].is_open = 1;
    }
    if (Z <= (x-1) && (x-1) < T && Z <= (y-1) && (y-1) < T
        && mines[x-1][y-1].value == Z && mines[x-1][y-1].is_open != 1)
        pp(mines, (x - 1), (y - 1));
    if (Z <= (x-1) && (x-1) < T && Z <= (y) && (y) < T
        && mines[x-1][y].value == Z && mines[x-1][y].is_open != 1)
        pp(mines, (x - 1), y);
    if (Z <= (x-1) && (x-1) < T && Z <= (y+1) && (y+1) < T
        && mines[x-1][y+1].value == Z && mines[x-1][y+1].is_open != 1)
        pp(mines, (x - 1), (y + 1));
    if (Z <= (x) && (x) < T && Z <= (y-1) && (y-1) < T
        && mines[x][y-1].value == Z && mines[x][y-1].is_open != 1)
        pp(mines, (x), (y - 1));
    if (Z <= (x) && (x) < T && Z <= (y+1) && (y+1) < T
        && mines[x][y+1].value == Z && mines[x][y+1].is_open != 1)
        pp(mines, (x), (y + 1));
    if (Z <= (x+1) && (x+1) < T && Z <= (y-1) && (y-1) < T
        && mines[x+1][y-1].value == Z && mines[x+1][y-1].is_open != 1)
        pp(mines, (x + 1), (y - 1));
    if (Z <= (x+1) && (x+1) < T && Z <= (y) && (y) < T
        && mines[x+1][y].value == Z && mines[x+1][y].is_open != 1)
        pp(mines, (x + 1), (y));
    if (Z <= (x+1) && (x+1) < T && Z <= (y+1) && (y+1) < T
        && mines[x+1][y+1].value == Z && mines[x+1][y+1].is_open != 1)
        pp(mines, (x + 1), (y + 1));
}
