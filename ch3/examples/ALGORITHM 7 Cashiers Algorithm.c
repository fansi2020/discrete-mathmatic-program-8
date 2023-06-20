#include<stdio.h>
void denomination (int n,int f[],int a) {//输入待找零的数值n 面值数组元素总数a
int d[1024];
for (int i = 0; i < a; i++)
{
    d[i] = 0;
    while (n >= f[i])
    {
        d[i]++;
        n-=f[i];
    }
    
}

for (int i = 0; i < a; i++)//将结果打印出来
{
    printf("%d ",f[i]);
}
printf("\n");
for (int i = 0; i < a; i++)
{
    printf("%d ",d[i]);
}


}

int main() {
    int k = 0,n = 0;
    int f[1024];
    printf("please input all denominations ");
    do
    {
        scanf("%d",&f[k]);
        k++;
    } while (getchar() != '\n');

    printf("please enter the denomination to be changed ");
    scanf("%d",&n);

    denomination(n,f,k);
    return 0;
}