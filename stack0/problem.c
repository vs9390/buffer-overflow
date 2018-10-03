#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    volatile int modified;
    char buffer[64];

    modified = 0;
    gets(buffer);
    if(modified != 0) {
        printf("buffer overflowed\n");
    } else {
        printf("was not able to overflow\n");
    }
    return 0;
}

9:36
15:30