#include<stdio.h>
double max (double a[],int b){
    double maxnum = a[0];
   for (int i = 1; i < b; i++)
   {
    if (maxnum<a[i])
        {
            maxnum = a[i];
        }
   }
   
    return maxnum;
}
int main(){
    int i=0;
    double f[1024],maxnum;
    printf("please input a number group ");
    do
    {
        scanf("%lf",&f[i]);
        i++;
    } while (getchar() != '\n');

    printf("%lf",max(f,i));
    return 0;
}