#include <stdio.h>

const char* sign_of(int x) {
    if (x > 0) {
        return "positive";
    } else if (x == 0) {
        return "zero";
    } else {
        return "negative";
    }
}

int main() {
    printf("5 is %s\n", sign_of(5));
    printf("0 is %s\n", sign_of(0));
    printf("-3 is %s\n", sign_of(-3));
    return 0;
}
