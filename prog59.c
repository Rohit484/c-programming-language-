#include <stdio.h>
#include <string.h>

int main(void) {

printf("\n Welcome! \n\n Please enter each data point. Enter 'done' when finished.\n\n");

double data[1048];
int i, count;

for (i = 1; ;i++) {

    printf("Data[%i]: ", i);
    scanf("%lf", &data[i]);

    if (data[i] == 'done') {

        break;

    } else {

        count++;

    }

  }
}
