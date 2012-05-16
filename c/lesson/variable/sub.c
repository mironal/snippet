#include <stdio.h>

int main(int argc, char* argv[])
{
    int hoge = 10;
    int fuga = 20;

    double d = 5.5;

    /* 代入前の変数の内容を出力. */
    printf("hoge = %d, fuga = %d, d = %f\n",hoge,fuga,d);

    /* いろいろな代入 */
    fuga = hoge;
    hoge = 40;
    d = hoge / fuga;

    /* 代入後の変数の内容を出力. */
    printf("hoge = %d, fuga = %d, d = %f\n",hoge,fuga,d);

    return 0;
}
