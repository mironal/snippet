#include <stdio.h>

int main(int argc, char* argv[])
{
    int hoge;
    int fuga;

    hoge = 1;
    fuga = 4;
    printf("a = %d, b = %d : a + b = %d\n",hoge, fuga, hoge + fuga);

    hoge = 4;
    fuga = 5;
    printf("a = %d, b = %d : a + b = %d\n",hoge, fuga, hoge + fuga);

    hoge = 8;
    fuga = 1;
    printf("a = %d, b = %d : a + b = %d\n",hoge, fuga, hoge + fuga);

    return 0;
}
