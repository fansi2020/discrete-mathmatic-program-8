#include <stdio.h>
int main (){
   
    int j = 0;
    int f[1024];
    do
    {
        scanf("%d",&f[j]);//输入image，即b，也叫range
        
         for (int i = 0; i < j; i++)
        {
            if (f[i]==f[j])
            {
                printf("f(%d) is same as f(%d)\n",i,j);//查看是否有相同元素，有则不符合one to one
                break;
            }
            
        }
        j++;
    } while (getchar() != '\n');

    //printf("\n");

    for (int i = 0; i < j; i++)
    {
        printf("%d ",f[i]);
    }
    
    return 0;
}