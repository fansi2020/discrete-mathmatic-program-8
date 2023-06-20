#include <stdio.h>
struct tm
{
    int tm_sec;  /*秒，正常范围0-59， 但允许至61*/
    int tm_min;  /*分钟，0-59*/
    int tm_hour; /*小时， 0-23*/
};

struct talk
{
    char talk_title[50];
    struct tm talk_st;
    struct tm talk_et;
};

int tmtransfer (struct tm a){
    int time;
    time = a.tm_hour*3600 + a.tm_min*60 + a.tm_sec;
    return time;
}

double min (double a[],int b){
    double minnum = a[0];
   for (int i = 1; i < b; i++)
   {
    if (minnum>a[i])
        {
            minnum = a[i];
        }
   }
   
    return minnum;
}

 void insertionsortfortalk (int a[],int b[],int c,struct talk d[]){// 输入结束时间 开始时间的数组，数组总数，讲座列表
    
    for (int i = 1; i < c; i++)// 第2到最后一位的元素循环 
    {
        int j = 0;
        while (a[i] > a[j])//第i+1个元素与第1到第j+1 （1=<j+1<=i+1) 个元素进行比较 ，如果第i+1个元素不大于第j+1 （1=<j+1<=i+1) 个元素，则输出j值
        {
            j++;
        }
        int m = a[i];//第i+1个元素暂存到m上
        struct talk tmptalk = d[i];
        int n = b[i];  
        for (int k = 0; k < i - j; k++)
        {
            a[i-k] = a[i-k-1];//第i+1个元素被前一个元素覆盖，共进行i-j次。
            d[i-k] = d[i-k-1];
            b[i-k] = b[i-k-1];
        }
        a[j] = m;//第i+1个元素放到第j+1个位置上，插入完毕
        b[j] = n;
        d[j] = tmptalk;
    }

    for (int i = 0; i < c - 1; i++)
    {
        if (a[i] > b[i+1])//前一场讲座的结束时间大于后一场讲座的开始时间
        {
            for (int j = i+1; j < c - 1; j++)
            {
                d[j] = d[j+1];
            }
            c--;
        }
        
    }
    
    for (int i = 0; i < c; i++)
 {
    printf("talk title : %s\ntalk start time : %d : %d : %d\ntalk end time : %d : %d : %d\n\n",d[i].talk_title,d[i].talk_st.tm_hour,d[i].talk_st.tm_min,d[i].talk_st.tm_sec,d[i].talk_et.tm_hour,d[i].talk_et.tm_min,d[i].talk_et.tm_sec);
 }
    
 }



//struct talk *inputtalk( )
int main() {
    int k = 0,starttime[1024],endtime[1024];
    struct talk a[1024];
     do
    {
        //printf("please input %ds talktitle talk start time and end time ",k+1);
        scanf("%s %d %d %d %d %d %d",&a[k].talk_title,&a[k].talk_st.tm_hour,&a[k].talk_st.tm_min,&a[k].talk_st.tm_sec,&a[k].talk_et.tm_hour,&a[k].talk_et.tm_min,&a[k].talk_et.tm_sec);
        starttime[k] = tmtransfer(a[k].talk_st);
        endtime[k] = tmtransfer(a[k].talk_et);
        k++;
    } while (getchar() != '\n');

 insertionsortfortalk(endtime,starttime,k,a);
 
  return 0;
}
