#include <stdio.h>
int main()
{
    double G = 6.674e-11;
    double M = 77.15;
    double m, R;
    scanf("%lf %lf", &m, &R);
    double F;
    F = G * M * m / (R * R);
    printf("%.3e\n", F);
    return 0;
}