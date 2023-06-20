#include<stdio.h>//请看看ch2的1.c,用到的程序更复杂
#include <stdlib.h>
#include<math.h>
#include<string.h>
char f[1024];
void printbinry(int num)//将十进制转换为二进制
  {
      int count = (sizeof(num)<<3)-1;//值为31
      while (count>=0) {
          
          int bitnum = num>>count; //除去符号位，从最高位开始得到每一位
          int byte = bitnum & 1; //和1进行与运算得到每一位的二进制数
         printf("%d",byte);
          
         if (count%4==0) {//每隔四位打印空格
             printf(" ");
         }
         
         count--;
     }
     printf("\n");
     
 }
 int transformbinry(char tmp[]){//将二进制转换为十进制
    
     int n,j,yy,tmp2 = 0;
     char ch[0];

     while ((atof(tmp)/pow(10,j))>=1)
     {
        j++;
     }
     
     n=j-1;
     j=0;

     do
    {
        ch[0]=tmp[j];
        yy=atof(ch);
        if (yy==1)
        {
            tmp2+=pow(2,n-j);
        }
        
        j++;
        
        
    } while (tmp[j] != '\0');
    //printf("%d",tmp2);
    return tmp2;
 }

 int main(){
    char a[1024],b[1024],c[1024],d[0],e[0];
    int j,m,n= 0;
    printf("please input a and b ");
    //int a=0b11111111;
    //int b=0b00000000;
    scanf("%s %s",&a,&b);

    while ((atof(a)/pow(10,j))>=1)
     {
        j++;
     }
    //printbinry(transformbinry(a)&transformbinry(b));
	//printbinry(transformbinry(a)|transformbinry(b));
	//printbinry(transformbinry(a)^transformbinry(b));
    printf("a&b ");
    for (int i = 0; i < j; i++)
    {
        d[0] = a[i];
        m = atof(d);
        e[0] = b[i];
        n = atof(e);
        printf("%d",m&n);
        if((i+1)%4==0){printf(" ");}
    }
    printf("\n");

    printf("a|b ");
    for (int i = 0; i < j; i++)
    {
        d[0] = a[i];
        m = atof(d);
        e[0] = b[i];
        n = atof(e);
        printf("%d",m|n);
        if((i+1)%4==0){printf(" ");}
    }
    printf("\n");

     printf("a^b ");
    for (int i = 0; i < j; i++)
    {
        d[0] = a[i];
        m = atof(d);
        e[0] = b[i];
        n = atof(e);
        printf("%d",m^n);
        if((i+1)%4==0){printf(" ");}
    }
    printf("\n");
 }