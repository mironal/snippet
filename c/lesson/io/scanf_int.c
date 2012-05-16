#include <stdio.h>

int main(int argc, char* argv[])
{
    int i;

    printf("input...\n");
    printf(">");

    /*
     * 変数iに整数を入力する.
     *
     * %dは10進数の整数を入力に取ることを指定している.
     * &iは変数iのポインタを示している.
     *
     */
    scanf("%d",&i);

    printf("input is %d\n",i);

    return 0;
}
