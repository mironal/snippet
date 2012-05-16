#include <stdio.h>

#define FIND 45

/*
 * 引数に指定した配列のなかに引数find
 * と同じ数があれば1を返す.なければ0を返す.
 *
 * @param arr 配列の先頭アドレス
 * @param num 配列の要素数
 * @raman find 見つけたい数
 *
 * @retval arrの中にfindがあれば1.無ければ0
 */
int check_val(int* arr, int num, int find)
{
    int i;
    int ret = 0;

    for( i = 0; i < num; i++){
        if(arr[i] == find){
            ret = 1;
            break;
        }
    }

    return ret;
}

void something(){
    /* 何か処理 */
    printf("find\n");
}

int main(int argc, char* argv[])
{
    int array[10] = {23,44,23,45,66,31,14,88,56,10};
    int i;


    /* 関数を使用しない場合. */
    for( i = 0; i < 10; i++){
        /* 値が見つかったら何かする. */
        if(array[i] == FIND){
            /*
             * 値が見つかった時の処理
             *
             * ずらずらーーーーー
             *
             *
             * ここの処理が長いと
             * 読むのも大変...
             *
             *
             *
             * しかもネストが深い...
             *
             *
             */
            break;
        }
    }

    /* きっちり関数を使用した場合. */
    /*
     * 値が見つかった時に、何か処理をしていることが
     * 一目瞭然
     */
    if(check_val(&array[0], 10, FIND) == 1){
        /* 値が見つかったら何かする. */
        something();
    }


    return 0;
}
