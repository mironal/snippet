#include <stdio.h>

void print_add(int a, int b)
{
    printf("a = %d, b = %d : a + b = %d\n",a, b, a + b);
}

int main(int argc, char* argv[])
{
    /* 1 + 4 */
    print_add(1,4);

    /* 4 + 5 */
    print_add(4,5);

    /* 8 + 1 */
    print_add(8,1);
    return 0;
}
