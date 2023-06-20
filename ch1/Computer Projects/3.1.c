#include <stdio.h>//计算只含有+-*/的表达式
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define maxn 10000

int main()
{
    char expn[maxn];
    scanf("%s",expn);
    double tmp1=0,tmp2=0;
    char ch1[10],ch2[10],op;
    int i=0,j=0;
    while(expn[i]!='+'&&expn[i]!='-'&&expn[i]!='*'&&expn[i]!='/'){
        ch1[j++]=expn[i++];
    }
    tmp1=atof(ch1);//得到表达式首个操作数
    while(1){
        j=0;
        op=expn[i++];
        while(expn[i]!='+'&&expn[i]!='-'&&expn[i]!=';'&&expn[i]!='*'&&expn[i]!='/'){
            ch2[j++]=expn[i++];
        }
        tmp2=atof(ch2);//得到第二个操作数
        //根据操作符更新第一个操作数
        if(op=='+')tmp1+=tmp2;
        else if(op=='-')tmp1-=tmp2;
        else if(op=='*')tmp1*=tmp2;
        else if(op=='/')tmp1/=tmp2;
        if(expn[i]==';')break;
    }
    printf("=%.2f\n",tmp1);
    //system("pause");
    return 0;
}
