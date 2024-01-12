#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = floor(n / 50);
    int a1 = n % 50;
    int b = floor(a1 / 20);
    int b1 = a1 % 20;
    int c = floor(b1 / 10);
    int c1 = b1 % 10;
    int d = floor(c1 / 5);
    int e = c1 % 5;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    return 0;
}