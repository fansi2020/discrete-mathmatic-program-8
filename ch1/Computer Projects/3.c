#include<stdio.h>
#include<math.h>
int byte[1024];
char f[1024];
void printtruthvalue(int num)
  {
      int count = (sizeof(num)<<3)-1;//值为31
      while (count>=0) {
          int bitnum = num>>count; //除去符号位，从最高位开始得到每一位
              byte[count] = bitnum & 1; //和1进行与运算得到每一位的二进制数
         printf("%d",byte[count]);
          
         if (count%4==0) {//每隔四位打印空格
             printf(" ");
         }
         
         count--;
     }
    
     
 }
int main(){
    int n,num;
    //char comproposition[1024];
    //printf("input the number of proposition variable ");
    printf("input the proposition ");
    //scanf("%d",&n);有个终端直接输入表达式并判断的方法，用do while 语句输入 if判断输入的是字母还是非字母，如果是字母，n++，如果不是 计入字符串 str[]，最后通过str[]与byte[]组合表达式并打印

    do
    {
        scanf("%d",&f[j]);//输入复合命题
        if ((f[j]<=122&f[j]>=97)|(f[j]<=90&f[j]>=65))
        {
            n++;
        }
        
        j++;
    } while (getchar() != '\n');

    while (n>0)
    {
        num+=pow(2,(n-1));
        n--;
    }
    //printf("%d",num);
    for (int i = 0; i < num+1; i++)
    {
        printtruthvalue(i);
         printf(" %d",f);//原本需要写出想要判断的命题例如：byte[0]&byte[1]&byte[2] 最多32个命题变量！！！
         printf("\n");
    }
    
return 0;
}

