#include <stdio.h>//与9相比这是同样的代码，但执行结果稍有不同
double matrix1[1024][1024]={0};
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
    int m,n;
    printf("please enter m n ");
    scanf("%d %d",&m,&n);//m，n是矩阵的行和列
    printf("please enter matrix ");
    inputmatrix(m,n,matrix1);

    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (matrix1[i][j]!=matrix1[j][i])
            {
                printf("its not symmetric because matrix1[%d][%d]",i+1,j+1);
                break;
            }
            
        }
        
    }
    return 0;
}