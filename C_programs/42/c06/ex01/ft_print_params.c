#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;

    if(argc > 1)
    {
        i = 1;
        while(i < argc)
        {
            while(*argv[i] != '\0')
                write(1, argv[i]++, 1);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}