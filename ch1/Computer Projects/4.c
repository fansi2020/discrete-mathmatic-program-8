#include<stdio.h>
int main(){
    float p,q;
    printf("please input p and q ");
    scanf("%f %f",&p,&q);
    printf("%f",p>q ? p: q);
    return 0;
}