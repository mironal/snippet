#include <stdio.h>

/*
 * よく使う型
 */
int main(int argc, char* argv[])
{
    /* 一文字を格納する変数 */
    char character = 'a';

    /* 文字列を格納する変数 */
    char* string   = "mojiretu";

    /* 整数を格納する変数 */
    int  i = 10;
    long l = 100;

    /* 少数を格納する変数 */
    float  f = 10.5;
    double d = 10000.5;

    /* 出力 %の後の文字に注意 */
    printf("character = %c\n",character);
    printf("string    = %s\n",string);
    printf("i         = %d\n",i);
    printf("l         = %ld\n",l);
    printf("f         = %f\n",f);
    printf("d         = %f\n",d);

    return 0;
}
