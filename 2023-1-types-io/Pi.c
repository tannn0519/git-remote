#include <stdio.h>
#include <math.h>
int main()
{
    double pi1, pi2;
    pi1 = log(640320.0 * 640320.0 * 640320.0 + 744.0) / sqrt(163.0);
    pi2 = 16 * atan(1 / 5.0) - 4 * atan(1 / 239.0);
    printf("%.15f\n%.15f", pi1, pi2);
    return 0;
}