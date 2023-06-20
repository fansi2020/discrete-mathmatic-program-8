#include <stdio.h>
int main (){
    int x = 0;
    int j = 0,i = 0,k = 0;
    int f[1024],g[1024];
    printf("please input image\n");
    do
    {
        scanf("%d",&f[j]);//输入image 
        j++;
    } while (getchar() != '\n');

    printf("please input codomain\n");
  do
    {
        scanf("%d",&g[i]);//输入codomain，注意不同元素带空格
        k = j - 1;
            while (k>=0)
            {
                if (g[i] == f[k])
                {
                    goto normalfun;
                }
                
                k--;
            }

        printf("this function is not onto");
        goto overprogram;
        
        normalfun : i++;
    } while (getchar() != '\n');
    

    
    printf("this function is onto");
   overprogram : return 0;
}