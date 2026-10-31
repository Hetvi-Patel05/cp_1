#include <stdio.h>
int main()
{
    float bytes = 20000000000;
    float bytestokb = bytes/1000;
    float bytestomb = bytes/1000000;
    float bytestogb = bytes/1000000000;
    printf("bytes=%f\nbytes to kb=%f\nbytes to mb=%f\nbytes to gb=%f\n", bytes, bytestokb, bytestomb, bytestogb);
    return 0;
}

