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
void joinofmatrix(int m,int n,bool matrix1[][1024],bool matrix2[][1024]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",matrix1[i][j]&matrix2[i][j]);
        }
        printf("\n");
    }
    
}

void meetofmatrix(int m,int n,bool matrix1[][1024],bool matrix2[][1024]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",matrix1[i][j]|matrix2[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
   int m,n;
    printf("please enter m n ");
    scanf("%d %d",&m,&n);//m，n是矩阵的行和列
    printf("please enter frist matrix ");
    inputboolmatrix(m,n,matrix1);
    printf("please enter second matrix ");
    inputboolmatrix(m,n,matrix2);
    printf("\n");
    joinofmatrix(m,n,matrix1,matrix2);
    printf("\n");
    meetofmatrix(m,n,matrix1,matrix2);
    return 0;
}