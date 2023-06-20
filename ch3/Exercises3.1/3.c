#include<stdio.h>
int main() {
    int i=0;
    double f[1024],sum = 0;
    printf("please input a number group ");
    do
    {
        scanf("%lf",&f[i]);
        sum += f[i];
        i++;
    } while (getchar() != '\n');

    printf("the sum of this grop is %lf",sum);
    return 0;
}