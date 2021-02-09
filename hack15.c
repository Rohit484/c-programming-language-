#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n;
    char* represent[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &n);

    if(n > 9) {
        printf("%s", represent[0]);
    }
    else {
        printf("%s", represent[n]);
    }

    return 0;
}
