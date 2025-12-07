// test.c
#include <stdio.h>
#include "sum.h"

int main() {
    if (sum(2, 3) == 5) {
        printf("Test Passed!\n");
        return 0;
    } else {
        printf("Test Failed!\n");
        return 1;
    }
}
