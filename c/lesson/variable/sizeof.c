#include <stdio.h>



int main(int argc, char* argv[])
{
    /* 各型のバイト数を表示. */
    printf("char   : %d\n",sizeof(char));
    printf("short  : %d\n",sizeof(short));
    printf("int    : %d\n",sizeof(int));
    printf("long   : %d\n",sizeof(long));
    printf("float  : %d\n",sizeof(float));
    printf("double : %d\n",sizeof(double));

    return 0;
}
