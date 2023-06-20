#include <stdio.h>
void nativestringmatcher (char t[],char p[]){
    int tz = 0,pz = 0,j = 0;
    while (t[j] != '\0')//text的元素总数
    {
        tz++;
        j++;
    }
    j = 0;
    while (p[j] != '\0')//pattern的元素总数
    {
        pz++;
        j++;
    }

    for (int i = 0; i < tz - pz + 1; i++)//从第一个元素遍历到第tz-pz个
    {
        int j = 0;
        while (j < pz & p[j] == t[i+j])//从pattern的第一个元素开始遍历 ，一旦到达尾部 或者 有一个字符不相等 退出while
        {
            j++;
        }
        if (j > pz - 1) printf("%d is a valid shift\n",i);//如果遍历到最后一个元素 即pz-1，则记录此时的偏移量i，也就是text中的第i个元素与pattern的的一个元素相等，后续字符也与pattern相等
    }
    
}

int main(){
    
    char f[1024],g[1024];
    printf("please input the text ");
   
        scanf("%s",&f);
    

    printf("please input the pattern ");
   
        scanf("%s",&g);
    
   
    nativestringmatcher(f,g);

    return 0;
}