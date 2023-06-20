#include <stdio.h>
 int n=3;
 double squence1[]={0,0.1,0.2};
 double squence2[]={0.3,0.2,0.1};
void implement(double squence1[]){
    int n=3;
    while (n-1>-1){
       
            printf("%lf ",1-squence1[n-1]);/* code */
        
        n--;
    }
    printf("\n");

}

void union0(double squence1[],double squence2[]){
    int n=3;
    while (n-1>-1){
        if (squence1[n-1]>squence2[n-1])
        {
            printf("%lf ",squence1[n-1]);/* code */
        }
        else  {printf("%lf ",squence2[n-1]);}
        n--;
    }
    printf("\n");
}

void intersect(double squence1[],double squence2[]){
    int n=3;
    while (n-1>-1){
        if (squence1[n-1]>squence2[n-1])
        {
            printf("%lf ",squence2[n-1]);
        }
        else  {printf("%lf ",squence1[n-1]);}
        n--;
    }
     printf("\n");
}
int main (){
  
    //scanf("%d,n");
    
//printf("first squence\n");
   
    for (int i = 0; i < n; i++)
    {
        printf("%lf ",squence1[i]);/* code */
    }


//printf("second squence\n");
    
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%lf ",squence2[i]);/* code */
    }
    printf("\n");
union0(squence1,squence2);
intersect(squence1,squence2);
implement(squence1);
implement(squence2);
return 0;
}