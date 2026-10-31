#include <stdio.h>

int main()
{
    float grosssales = 800000;
    float discount = 0.1 * grosssales;
    float netsales = grosssales - discount;

    printf("grosssales=%f\ndiscount=%f\nnetsales=%f\n", grosssales, discount, netsales);

    return 0;
}

