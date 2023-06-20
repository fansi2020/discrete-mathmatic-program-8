#include <stdio.h>
 void insertionsort (double a[],int c){// 输入数组 和 元素总数
    
    for (int i = 1; i < c; i++)// 第2到最后一位的元素循环 
    {
        int j = 0;
        while (a[i] > a[j])//第i+1个元素与第1到第j+1 （1=<j+1<=i+1) 个元素进行比较 ，如果第i+1个元素不大于第j+1 （1=<j+1<=i+1) 个元素，则输出j值
        {
            j++;
        }
        double m = a[i];//第i+1个元素暂存到m上
        for (int k = 0; k < i - j; k++)
        {
            a[i-k] = a[i-k-1];//第i+1个元素被前一个元素覆盖，共进行i-j次。
        }
        a[j] = m;//第i+1个元素放到第j+1个位置上，插入完毕

    }
    
 }
 int main(){
    int k = 0;
    double f[1024];
    printf("please input a number group ");
    do
    {
        scanf("%lf",&f[k]);
        k++;
    } while (getchar() != '\n');
   
    insertionsort(f,k);

    for (int i = 0; i < k ; i++)
    {
        printf("%lf ",f[i]);
    }

    return 0;
}