#include <stdio.h>
int binarysearch (double a, double b[], int c){//二分搜索 ！！！只适用于从小到大排列的数组！！！
    int i = 0,j = c - 1,m;
    
    while (i < j)
    {
        m = (i + j) / 2;
        if (a > b[m]) i = m + 1;
        else j = m;
    }

    if (a == b[i]) return i+1;//找到匹配的元素了
    else return 0;//没找到
    
}

int main(){
    int k = 0;
    double f[1024],g = 0;
    printf("please input a number group ");
    do
    {
        scanf("%lf",&f[k]);
        k++;
    } while (getchar() != '\n');
    printf("please input the number you want find ");
    scanf("%lf",&g);
    printf("%d",binarysearch(g,f,k));
    return 0;
}