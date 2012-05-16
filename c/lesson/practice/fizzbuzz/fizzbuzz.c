#include <stdio.h>

#define LIMIT 100
#define FIZZ  3
#define BUZZ  5

int main(int argc, char* argv[])
{
    int i;
    int fizz;
    int buzz;

    for( i = 1; i <= LIMIT; i++){
       fizz = i % FIZZ;
       buzz = i % BUZZ;

       if( (fizz == 0) && (buzz == 0) ){
           printf("FizzBuzz\n");
       }else if( fizz == 0 ){
           printf("Fizz\n");
       }else if( buzz == 0 ){
           printf("Buzz\n");
       }else{
           printf("%d\n", i);
       }
    }
    return 0;
}
