#include <stdio.h>

int main()
{
    float grosssalary = 800000;
    float allowance = 0.1 * grosssalary;
    float deduction = 0.03 * grosssalary;
    float netsalary = grosssalary + allowance - deduction;

    printf("grosssalary=%f\nallowance=%f\ndeduction=%f\nnetsalary=%f\n", grosssalary, allowance, deduction, netsalary);

    return 0;
}

