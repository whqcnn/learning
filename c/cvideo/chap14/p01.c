#include <stdio.h>

int main()
{
    // 以“写入”的方式在当前文件夹下打开（或创建）一个叫floats.data的文件
    // 文件指针设为fp (命令由来：f代表文件file，而p代表指针)
    FILE *fp = fopen("floats.data", "wb");

    int n = 10000;
    for(; n > 0; --n)
    {

        fprintf(fp, "%d\n", n);
    }
    fclose(fp); // 关闭fp文件

    // 这里你在Terminal里同一个文件夹下用命令 cat floats.data 命令就能看到文件的内容了
}

