#変数
##概要
変数とは値を格納する箱である.

##変数の宣言の仕方
    int i = 0;   /* int型のiという変数を宣言し、0で初期化した. */
    double hoge; /* double型のhogeという変数を初期化無しで宣言した. */


##値の代入

宣言した変数にはプログラムの途中で様々な値に書き換えることが出来る.

    int i = 0; /* int型のiという変数を宣言し、0で初期化した. */
    i = 10;    /* iに10を代入した. */

    double hoge; /* double型のhogeという変数を初期化無しで宣言した. */
    hoge = 55.4; /* hogeに55.4を代入した. */
    hoge = 44.3; /* 再代入も可能 */

    double fuga = 11.2;
    hoge = fuga; /* 別の変数の値も代入できる */


##変数の型

数学で整数や小数の区別が有るように、C言語にも整数や小数の区別がある.
C言語には様々な型があるがよく使うのは以下の5つ.

    char  : 1文字
    int   : 整数
    long  : 整数
    double: 小数

various.cなどを見ていろいろいじってみよう.