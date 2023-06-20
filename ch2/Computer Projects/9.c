#include <stdio.h>
double matrix1[1024][1024];
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
    scanf("%d %d ",&m,&n);//m，n是第一个矩阵的行和列  问题解决：因为输入里面多了一个空格
    printf("please enter matrix "); //无法理解执行顺序，为什么这个printf会等到输入矩阵完毕才会执行呢？见9.5（之前有一步操作是把此行剪切到函数inputmatrix内）
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