#include<stdio.h>//5.0的改良版 加入了数字棋盘
    int f[1024][1024];//暂存每个曲奇饼的状态
    int g[1024][1024];//表示每个曲奇饼的状态
int numberofwei (int a) {//计算位数 支持所有整数
    int wei = 0;
    if (a>0)
    {
        while (a>=1)//控制曲奇之间的间隔
                {
                    wei++;
                    a /= 10;
                }
    }
    else if (a<0)
    {
        a=-a;
        while (a>=1)//控制曲奇之间的间隔
                {
                    wei++;
                    a /= 10;
                }
    }
    else wei = 1;
    
        return wei;
}
int main(){
    int m,n,kongge;//所有曲奇的边界 曲奇之间的间隔
    int player = 0;//玩家
    printf("input m and n to start chomp game ");
    scanf("%d %d",&m,&n);
    int p = m+1;//用于确定已吃曲奇与未吃曲奇的边界
    int q = n+1;
    int tmp1 = m+1;//储存上一次已吃曲奇与未吃曲奇的边界变量值
    int tmp2 = n+1;
    kongge = m;
    for (int i = 0; i < m+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            g[i][j]=1;
        }
        
    }
    
   while (p!=1|q!=1)
   {
     for (int i = 0; i < m+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            if (i == 0 & j == 0)
            {
                g[i][j]=3; f[i][j]=3;printf("0");//棋盘数字
                for (int k = 0; k < numberofwei(m) - numberofwei(i)+1; k++)
                {
                    printf(" ");
                }
            }
            
            else if (i == 0 & j != 0) {
                g[i][j]=3; f[i][j]=3;printf("%d ",j);//棋盘数字
                
            }
            else if (j == 0 & i != 0) {
                g[i][j]=3; f[i][j]=3; printf("%d",i);//棋盘数字 

                for (int k = 0; k < numberofwei(m) - numberofwei(i)+1; k++)
                {
                    printf(" ");
                }  
            }
            else if (i==1&j==1) {g[i][j]=2;f[i][j]=2;printf("x");}//有毒的曲奇饼
            else if (i>=p&j>=q) f[i][j]=0;//被吃掉的曲奇饼
            else  f[i][j]=1;//正常的曲奇饼
            g[i][j] &= f[i][j];

            if (g[i][j]==0) printf("o");
            else if (g[i][j]==1) printf("*");

            kongge = j;
            if (i != 0) {
            while (kongge>=1)//控制曲奇之间的间隔
            {
                printf(" ");
                kongge /= 10;
            }
            }
           
        }
        printf("\n");
    }
    printf("\n");
    printf("its player %d turn. ",player);
    scanf("%d %d",&p,&q);
    
    player = 1-player;
    if ((p>=tmp1&q>=tmp2)|(p<1)|(q<1)|(p>m)|(q>n))
    {
       //要吃的曲奇饼必须存在于当前位置，否则直接判输
        break;
    }
    tmp1 = p;
    tmp2 = q;
   }
   printf("\n");
   printf("congratulations!!! player %d win!!!",player);
    return 0;
}