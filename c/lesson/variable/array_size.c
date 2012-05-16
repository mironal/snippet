#include <stdio.h>

/* 配列の要素数を求めるマクロ */
#define ArraySizeOf(array)  (sizeof(array) / sizeof(array[0]))

int main(int argc, char* argv[])
{
    int arr_i[100];
    double arr_d[50];


    printf("sizeof(arr_i)      = %d\n", sizeof(arr_i));
    printf("sizeof(arr_i[0])   = %d\n", sizeof(arr_i[0]));
    printf("arr_i size         = %d\n", sizeof(arr_i) / sizeof(arr_i[0]));
    printf("ArraySizeOf(arr_i) = %d\n",ArraySizeOf(arr_i));

    printf("\n");

    printf("sizeof(arr_d)      = %d\n", sizeof(arr_d));
    printf("sizeof(arr_d[0])   = %d\n", sizeof(arr_d[0]));
    printf("arr_d size         = %d\n", sizeof(arr_d) / sizeof(arr_d[0]));
    printf("ArraySizeOf(arr_d) = %d\n",ArraySizeOf(arr_d));

    return 0;
}
