#include <stdio.h>

/*
 * 引数valの数が素数なら1,素数でないなら0が返ります.
 */
int check_prime(int val)
{
    int i;
    int cnt = 0;

    /*
     * 素数は1と自分自身の2つの数でしか割り切れない
     * ことを利用して判定を行う.
     */

    for( i = 1; i <= val; i++){
        /* 割り切れたらインクリメント */
        if( (val % i) == 0 ){
            cnt++;
        }
    }

    /* 割り切れた回数が2回だったら素数である. */
    if( cnt == 2 ){
        return 1;
    }else{
        return 0;
    }
}

int main(int argc, char* argv[])
{
    int in = 0;
    int result;

    printf("数を入力して下さい>");
    scanf("%d",&in);

    result = check_prime(in);

    if(result == 0){
        printf("not prime.\n");
    }else{
        printf("prime.\n");
    }

    return 0;
}
