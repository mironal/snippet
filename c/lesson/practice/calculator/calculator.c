#include <stdio.h>

int input_int(){
    char str[256] = {0};

    scanf("%d",&str[0]);
}

int main(int argc, char* argv[])
{
    int in[2] = {0};
    char ope;
    int rslt = 0;

    printf("1つ目の数を入力して下さい>");
    scanf("%d",&in[0]);

    printf("2つ目の数を入力して下さい>");
    scanf("%d",&in[1]);

    printf("演算子を入力して下さい>");
    /*
     * %*cで前回の改行コードを読み捨てている.
     * こうしないとどうなるかは試してみると分かる.
     */
    scanf("%*c%c",&ope);


    switch (ope){
        case '+':
            rslt = in[0] + in[1];
            printf("%d + %d = %d\n", in[0], in[1], rslt);
            break;
        case '-':
            rslt = in[0] - in[1];
            printf("%d - %d = %d\n", in[0], in[1], rslt);
            break;
        case '*':
            rslt = in[0] * in[1];
            printf("%d * %d = %d\n", in[0], in[1], rslt);
            break;
        case '/':
            if( in[1] != 0 ){
                rslt = in[0] / in[1];
                printf("%d / %d = %d\n", in[0], in[1], rslt);
            }else{
                printf("invalid value. in[1] = 0\n");
            }
            break;
        default:
            printf("invalid operator. %c\n",ope);
    }


    return 0;
}
