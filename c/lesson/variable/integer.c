#include <stdio.h>

int main(int argc, char* argv[])
{
    /* int型の変数hogeを初期化無しで宣言 */
    int hoge;
    /* int型の変数fugaを10で初期化して宣言*/
    int fuga = 10;

    /* 変数の内容を表示 */
    printf("********** before **********\n");
    printf("hoge = %d\n",hoge);
    printf("fuga = %d\n",fuga);

    /* int型の変数に20を代入した*/
    hoge = 20;
    fuga = 50;

    /* 変数の内容を表示 */
    printf("********** after  **********\n");
    printf("hoge = %d\n",hoge);
    printf("fuga = %d\n",fuga);

    return 0;
}
