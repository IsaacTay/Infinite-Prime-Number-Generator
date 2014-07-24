#include <stdio.h>
#include <stdlib.h>

long Primes[10000000] = {2};
long num = 3;
long num2;
long i = 0;
long i2 = 1;
long e = 100000 ;
int main()
{
    printf("1. 2\n");
    while (i2 < e) {
            while (i != -1) {
                num2 = num % Primes[i];
                if (i == 0) {
                    if (num2 == 0) {
                        i = -1;
                    }
                    else {
                        Primes[i2] = num;
                        i2 = i2 + 1;
                        i = -1;
                        printf("%ld. %ld\n", i2, num);
                    }
                }
                else {
                    if (num2 == 0) {
                        i = -1;
                    }
                    else {
                        i = i - 1;
                    }
                }
            }
            i = i2 - 1;
            num = num + 1;
    }

    return 0;
}
