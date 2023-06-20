#include <stdio.h>
double matrix1[1024][1024]={0};
double matrix2[1024][1024]={0};
double matrix[1024][1024]={0};
void inputmatrix (int m,int n,double matrix[][1024]){
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%lf",&matrix[i][j]);
    }
    
}

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%lf ",matrix[i][j]);
    }
    printf("\n");
}
}
int main(){
int m,n,k;
    printf("please enter m n and k ");
    scanf("%d %d %d",&m,&n,&k);//m，k是矩阵的行和列，n是n次幂,m和k必须相同
    printf("please enter matrix ");
    inputmatrix(m,k,matrix1);
    printf("\n");
     for (int i = 0; i < m; i++)
            {
                    for (int j = 0; j < m; j++)
                    {   
                        matrix[i][j]=matrix1[i][j];
                    }
                
            }

    for (int p = 0; p < n-1; p++)
    {
                for (int i = 0; i < m; i++)
            {
                    for (int j = 0; j < m; j++)
                    {
                        matrix2[i][j]=0;
                        for (int o = 0; o < m; o++)
                        {
                            matrix2[i][j]+=matrix[i][o]*matrix1[o][j];
                        }
                        printf("%lf ",matrix2[i][j]);
                    }
                printf("\n");
            }
            printf("\n");
            for (int i = 0; i < m; i++)
        {
                for (int j = 0; j < k; j++)
                {
                matrix[i][j]=matrix2[i][j];
                }
                
        }
    }
    
   return 0;

}