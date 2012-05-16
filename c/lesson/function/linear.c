#include <stdio.h>

/*
 * 一次関数
 * y = 4x + 3を計算する関数
 * xが入力でyが出力
 */
int function(int x)
{
    int y = 0;

    y = 4 * x + 3;

    return y;
}

int main(int argc, char* argv[])
{
    int in_x  = 1;
    int out_y = 0;

    /* 関数を使って計算 */
    out_y = function(in_x);

    printf("out_y = %d\n", out_y);

    /* 入力値を変えて、再び計算 */
    in_x = 2;
    out_y = function(in_x);

    printf("out_y = %d\n", out_y);

    return 0;
}
