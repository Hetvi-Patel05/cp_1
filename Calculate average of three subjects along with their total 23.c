#include <stdio.h>

int main()
{
    float marksinmathematics = 100, marksinchemistry = 99, marksinphysics = 99;
    float total = marksinmathematics + marksinchemistry + marksinphysics;
    float averagemarks = (total * 100) / 300;

    printf("marks in mathematics=%f\nmarks in chemistry=%f\nmarks in physics=%f\naverage marks=%f\n", marksinmathematics, marksinchemistry, marksinphysics, averagemarks);

    return 0;
}

