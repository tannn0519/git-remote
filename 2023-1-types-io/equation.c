#include <stdio.h>
#include <math.h>
int main()
{
    double p, q;
    scanf("%lf %lf", &p, &q);
    double x1;
    x1 = cbrt(-q / 2.0 + sqrt(q * q / 4.0 + p * p * p / 27.0)) + cbrt(-q / 2.0 - sqrt(q * q / 4.0 + p * p * p / 27.0));
    printf("%.3f\n", x1);
    return 0;
}