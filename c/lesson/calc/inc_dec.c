#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 0;

    i++; /* インクリメント i = i + 1;と同じ */
    i++;

    printf("i = %d\n",i);

    i--; /* デクリメント i = i - 1;と同じ */

    printf("i = %d\n",i);

    return 0;
}
