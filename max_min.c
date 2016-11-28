// 求最大值和最小值

#include <stdio.h>

void main(void)
{
    int a, b, c;
    int max=0, min=0;

    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    if(a > max)
        max=a;
    if(b > max)
        max=b;
    if(c > max)
        max=c;

    min = a;
    if(a < min)
        min=a;
    if(b < min)
        min=b;
    if(c < min)
        min=c;

    printf("max:%d\n", max);
    printf("min:%d\n", min);

    return 0;
}
