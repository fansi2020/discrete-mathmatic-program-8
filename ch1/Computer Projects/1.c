#include<stdio.h>
#include<stdbool.h>
int main(){
int a,b;//如果把数据类型从int换为bool，a的值将一直为零。？？？？？
//printf("please input bool varity a and b ");
//scanf("%d%d",&a,&b);
//printf("%d %d",a,b);
for (int a = 0; a < 2; a++)
{
    for (int b = 0; b < 2; b++)
    {
        printf("%d %d",a,b );
        printf("they truth values of conjection is %d,disjection is %d,exclusive or is %d,conditional statement is %d,biconditional of a and b is %d",a&b,a|b,(a|b)-(a&b),((a!=1)|(b!=0)),a==b);
        printf("\n");
    }
    
}

return 0;
}