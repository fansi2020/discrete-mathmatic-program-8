#include<stdio.h>
    int f[1024][1024];//暂存每个曲奇饼的状态
    int g[1024][1024];//表示每个曲奇饼的状态
int main(){
    int m,n;//所有曲奇的边界
    int player = 0;//玩家
    printf("input m and n to start chomp game ");
    scanf("%d %d",&m,&n);
    int p = m+1;//用于确定已吃曲奇与未吃曲奇的边界
    int q = n+1;
    int tmp1 = m+1;//储存上一次已吃曲奇与未吃曲奇的边界变量值
    int tmp2 = n+1;
     
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            f[i][j]=2;
            g[i][j]=1;
        }
        
    }
    
    
   while (p!=1|q!=1)
   {
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0&j==0) {g[i][j]=2;printf("x ");}//有毒的曲奇饼
            else if (i>=(p-1)&j>=(q-1)) f[i][j]=0;//被吃掉的曲奇饼
            else  f[i][j]=1;//正常的曲奇饼
            g[i][j] &= f[i][j];
            if (g[i][j]==0) printf("o ");
            else if (g[i][j]==1) printf("* ");
            //printf("%d，%d ",g[i][j],f[i][j]);
             
        }
        printf("\n");
    }
    printf("\n");
    printf("its player %d turn.(please input less than the last of valuve of variable) ",player);
    scanf("%d %d",&p,&q);
    
    player = 1-player;
    if ((p>=tmp1&q>=tmp2)|(p==0)&(q==0)|(p>m)|(q>n))
    {
       //要吃的曲奇饼必须存在于当前位置，否则直接判输
        break;
    }
    tmp1 = p;
    tmp2 = q;
   }
   printf("congratulations!!! player %d win!!!",player);
    return 0;
}