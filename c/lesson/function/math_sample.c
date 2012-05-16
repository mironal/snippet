#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    double fa = 10.5;
    double fb = 20.8;

    /* 大きい方を返す. */
    printf("max = %f\n", fmax(fa, fb));

    printf("sin(0) = %f\n", sin(0));
    printf("cos(0) = %f\n", cos(0));

    printf("4^2 = %f\n", pow(4.0, 2.0));

    return 0;
}
