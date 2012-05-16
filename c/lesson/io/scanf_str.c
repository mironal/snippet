#include <stdio.h>

int main(int argc, char* argv[])
{
    char buf[128];

    printf("input...\n");
    printf(">");

    /*
     * 変数bufに文字列を入力する.
     *
     * %dは10進数の整数を入力に取ることを指定している.
     * &buf[0]は配列bufの先頭ポインタを示している.
     *
     */
    scanf("%s",&buf[0]);
    /* scanf("%s",buf);と書いても同じ */

    printf("input is %s\n",&buf[0]);

    return 0;
}
