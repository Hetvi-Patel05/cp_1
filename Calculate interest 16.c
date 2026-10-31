#include <stdio.h>

int main()
{
    float principalamount = 70000;
    float rate = 8;
    float timeinyears = 10;
    float simpleinterest = principalamount * rate * timeinyears / 100;

    printf("principal amount=%f\nrate=%f\ntime in years=%f\nsimple interest=%f\n", principalamount, rate, timeinyears, simpleinterest);

    return 0;
}

