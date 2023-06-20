#include <stdio.h>
int main (){
    int y = 0;
    int j = 0;
    int f[1024];
    printf("please enter x for f-1(y) ");
    scanf("%d",&y);
    printf("please enter image ");
    do
    {
        scanf("%d",&f[j]);//输入image，即b，也叫range

            if (y==f[j])
            {
                printf("f-1(y) is %d",j+1);
                break;
            }
            
        j++;
    } while (getchar() != '\n');
   
    return 0;
}