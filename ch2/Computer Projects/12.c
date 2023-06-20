#include <stdio.h>
#include <stdbool.h>
bool matrix1[1024][1024]={0};
bool matrix2[1024][1024]={0};
bool matrix[1024][1024]={0};
void inputboolmatrix (int m,int n,bool matrix[][1024]){
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&matrix[i][j]);
    }
    
}

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
}
int main(){
int m,n,k;
    printf("please enter m n and k ");
    scanf("%d %d %d",&m,&n,&k);//m，k是矩阵的行和列，n是n次幂,m和k必须相同
    printf("please enter matrix ");
    inputboolmatrix(m,k,matrix1);
    printf("\n");

     for (int i = 0; i < m; i++)
            {
                    for (int j = 0; j < m; j++)
                    {   
                        matrix[i][j]=matrix1[i][j];
                        
                    }
                   
            }


    while (n>1)
    {
           for (int i = 0; i < m; i++)
            {
                    for (int j = 0; j < m; j++)
                    {
                        matrix2[i][j]=0;
                        for (int o = 0; o < m; o++)
                        {
                            //测试每一元素 printf("/ %d %d /",matrix[i][o],matrix1[o][j]);
                            matrix2[i][j]|=matrix[i][o]&matrix1[o][j];
                        }
                        //matrix[i][j]=matrix2[i][j];
                        printf("%d ",matrix2[i][j]);
                    }
                 printf("\n");
            }
            printf("\n");
            for (int i = 0; i < m; i++)
            {
                    for (int j = 0; j < m; j++)
                    {   
                        matrix[i][j]=matrix2[i][j];
                        
                    }
                   
            }
            n--;
    }
    return 0;
}