#include <stdio.h>

int calculate_result(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        if (i % 2 == 0) {
            result += i;
        } else {
            result *= i;
        }
        if (result > 1000) {
            result -= 100;
        }
    }
    printf("Result: %d\n", result);
    return result;
}
