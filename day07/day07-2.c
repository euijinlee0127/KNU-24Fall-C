#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    long long iterations = 1000000000;
    long long in_circle = 0;
    double x, y;
    double pi_estimate;

    srand(time(NULL));

    for (long long i = 1; i <= iterations; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        if (x * x + y * y <= 1) {
            in_circle++;
        }


        if (i % 10000000 == 0) {
            pi_estimate = 4.0 * (double)in_circle / (double)i;
            printf("%d%% 진행 원주율 : %.6f  ", (int)(i / (iterations / 100)), pi_estimate);

            int percent = i / 10000000;

            for (int i = 0; i < percent / 5; i++) {
                printf("■");
            }

           for (int i = 0; i < 20 - percent / 5; i++) {
                    printf("□");
            }
           printf("\n");

        }
    }

    pi_estimate = 4.0 * (double)in_circle / (double)iterations;
    printf("최종 계산된 원주율 : %.6f\n", pi_estimate);

    return 0;
}