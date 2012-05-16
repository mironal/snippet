#include <stdio.h>

#define LIMIT 5

int main(int argc, char* argv[])
{
    int i = 0;

    while(i < LIMIT){
        printf("%d Hello world.\n", i + 1);
        i++;
    }
}
