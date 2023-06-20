#include <stdio.h>
 int n=3;
 int squence1[]={0,0,0};
 int squence2[]={0,0,0};
void union0(int squence1[],int squence2[]){
    int n=3;
    while (n-1>-1){
        if (squence1[n-1]>squence2[n-1])
        {
            printf("%d",squence1[n-1]);/* code */
        }
        else  {printf("%d",squence2[n-1]);}
        n--;
    }
    printf("\n");
}

void intersect(int squence1[],int squence2[]){
    int n=3;
    while (n-1>-1){
        if (squence1[n-1]>squence2[n-1])
        {
            printf("%d",squence2[n-1]);
        }
        else  {printf("%d",squence1[n-1]);}
        n--;
    }
     printf("\n");
}

void difference(int squence1[],int squence2[]){
    int n=3;
    while (n-1>-1){
        if (squence1[n-1]>squence2[n-1])
        {
            printf("%d",squence1[n-1]-squence2[n-1]);
        }
        else  {printf("0");}
        n--;
    }
     printf("\n");
}

void sum(int squence1[],int squence2[]){
    int n=3;
    while (n-1>-1){
        
        printf("%d",squence1[n-1]+squence2[n-1]);
        
        n--;
    }
}
int main (){
  
    //scanf("%d,n");
    
//printf("first squence\n");
for (int i = 0; i < n; i++)
{
    squence1[i]=i;/* code */
}
for (int i = 0; i < n; i++)
    {
        printf("%d ",squence1[i]);/* code */
    }

printf("\n");
//printf("second squence\n");
for (int i = 0; i < n; i++)
{
    squence2[i]=3-i;/* code */
}
for (int i = 0; i < n; i++)
    {
        printf("%d ",squence2[i]);/* code */
    }
/*union0(squence1,squence2);
intersect(squence1,squence2);
difference(squence1,squence2);
sum(squence1,squence2);*/
return 0;
}