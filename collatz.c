// 8 bit C collatz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100

int collatz(int seed) {
    int steps = 0;
    while(seed > 1) {
        if(seed%2 == 0) {
            steps++;
            seed /= 2;
            continue;
        }
        steps++;
        seed = seed*3+1;
    }
    return steps;
}

int main(void) {
    int i, steps;
    clock_t start, elapsed;
    printf("Starting Collatz for %d seeds\n", RANGE);
    start = clock();
    for(i=1; i<RANGE; i++) {
        steps = collatz(i);
        if(i%10 == 0) printf("Seed %d Steps %d\n",i,steps);
    }
    elapsed = (clock() - start)/CLOCKS_PER_SEC;
    printf("Finished Collatz in %lu s\n\n", elapsed);
    return 0;
}
