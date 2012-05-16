#include <stdio.h>

int main(int argc, char* argv[])
{
    int i;
    int a[4];

    /* 配列の値をいじる */
    for( i = 0; i < 4; i++){
        a[i] = i;
    }

    for( i = 0; i < 4; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
