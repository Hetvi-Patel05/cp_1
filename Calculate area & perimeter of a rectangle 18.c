#include <stdio.h>

int main()
{
    float Lengthofrectangle = 5, breadthofrectangle = 5;
    float perimeter = 2 * (Lengthofrectangle + breadthofrectangle);
    float area = breadthofrectangle * Lengthofrectangle;

    printf("Length of rectangle=%f\nbreadth of rectangle=%f\nperimeter=%f\narea=%f\n", Lengthofrectangle, breadthofrectangle, perimeter, area);

    return 0;
}

