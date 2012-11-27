#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_string();
void write_url_path(int, int, char*);
int read_int();

char *get_string()
{
    FILE *pFile;
    long lSize;
    char *buffer;

    pFile = fopen("board.data", "r");
    fseek (pFile , 0, SEEK_END);
    lSize = ftell (pFile);
    rewind (pFile);
    buffer = (char *)malloc (sizeof(char) *lSize);
    fread (buffer, 1, lSize, pFile);
    fclose(pFile);
    return buffer;
}

int read_int(char *file_name)
{
    int n;
    FILE *pf = fopen(file_name, "r");
    fscanf(pf, "%d", &n);
    fclose(pf);
    return n;
}

void write_url_path(int x, int y, char *path)
{
    size_t len = strlen(path);
    char buffer[len + 70];
    sprintf(buffer, "http://www.hacker.org/coil/index.php?x=%d&y=%d&path=%s", x, y, path);
    FILE * pFile;
    pFile = fopen("path.data", "w");
    fputs(buffer, pFile);
    fclose(pFile);
}
