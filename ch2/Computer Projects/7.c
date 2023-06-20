#include <stdio.h>
double matrix1[1024][1024];
double matrix2[1024][1024];
double matrix[1024][1024];
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

/*void matrixmultiplay1 (int m,int n,int k,double matrix1[][1024],double matrix2[][1024]){
    double matrix[1024][1024];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j]=0;
            for (int o = 0; o < k; o++)
            {
                matrix[i][j]+=matrix1[i][o]*matrix2[o][j];
            }
            
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
    
}*/
int main (){
    int m,n,k;
    printf("please enter m n and k ");
    scanf("%d %d %d",&m,&n,&k);//m，k是第一个矩阵的行和列，k和n是第二个矩阵的行和列
    printf("please enter frist matrix ");
    inputmatrix(m,k,matrix1);
    printf("please enter second matrix ");
    inputmatrix(k,n,matrix2);
    //matrixmultiplay1(m,n,k,matrix1,matrix2);
    printf("consault\n");
for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j]=0;
            for (int o = 0; o < k; o++)
            {
                matrix[i][j]+=matrix1[i][o]*matrix2[o][j];
            }
            printf("%lf ",matrix[i][j]);
        }
        printf("\n");
    }

return 0;
}