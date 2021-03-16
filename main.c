#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "usage: d2h n1 [n2...]\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
        fprintf(stdout, "%s = %X\n", argv[i], atoi(argv[i]));

    return 0;
}