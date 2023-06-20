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
    printf("please enter m n k ");
    scanf("%d %d %d",&m,&n,&k);//m,k是第一个矩阵行和列，k，n是第二个矩阵行和列。
    printf("please enter frist matrix ");
    inputboolmatrix(m,k,matrix1);
    printf("please enter second matrix ");
    inputboolmatrix(k,n,matrix2);

     printf("consault\n");
for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j]=0;
            for (int o = 0; o < k; o++)
            {
                matrix[i][j]|=matrix1[i][o]&matrix2[o][j];
            }
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}