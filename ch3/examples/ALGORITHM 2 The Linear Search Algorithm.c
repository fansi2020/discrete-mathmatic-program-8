#include<stdio.h>
int linearsearch(double a,double b[], int c){
    int i = 0,n = 0;
    while (i < c)
    {
        i++;
        if (a == b[i])
        {
            return i+1;
        }
    }
        return 0;
}
int main(){
    int i = 0;
    double f[1024],g = 0;
    printf("please input a number group ");
    do
    {
        scanf("%lf",&f[i]);
        i++;
    } while (getchar() != '\n');
    printf("please input the number you want find ");
    scanf("%lf",&g);
    printf("%d",linearsearch(g,f,i));
    return 0;
}