#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    volatile int modified;
    char buffer[64];

    modified = 0;
//  gets(buffer);
    fgets (buffer, sizeof(buffer), stdin);
    if(modified != 0) {
        printf("buffer overflowed\n");
    } else {
        printf("was not able to overflow\n");
    }
    return 0;
}

