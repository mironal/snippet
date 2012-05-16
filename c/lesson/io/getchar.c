#include <stdio.h>

int main(int argc, char* argv[])
{
    int c;

    printf("input...\n");
    printf(">");

    /* 1文字入力 */
    c = getchar();

    printf("input is %c\n",c);

    return 0;
}
