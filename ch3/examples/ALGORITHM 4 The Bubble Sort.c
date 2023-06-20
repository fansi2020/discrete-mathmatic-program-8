#include <stdio.h>

void bubblesort (double a[], int b){
    int tmp;
    for (int i = 0; i < b - 1; i++)
    {
        for (int j = 0; j < b - i - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                 tmp = a[j];
                 a[j] = a[j+1];
                 a[j+1] = tmp;
            }
            
        }
        
    }
        
}

int main(){
    int k = 0;
    double f[1024];
    printf("please input a number group ");
    do
    {
        scanf("%lf",&f[k]);
        k++;
    } while (getchar() != '\n');
   
    bubblesort(f,k);

    for (int i = 0; i < k ; i++)
    {
        printf("%lf ",f[i]);
    }

    return 0;
}