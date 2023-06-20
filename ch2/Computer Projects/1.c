#include <stdio.h>//请参考ch1的2.c,用到程序更简单

void printbinry(int num)
  {
      int count = (sizeof(num)<<3)-1;//值为31
      while (count>=0) {
          int bitnum = num>>count; //除去符号位，从最高位开始得到每一位
          int byte = bitnum & 1; //和1进行与运算得到每一位的二进制数
         printf("%d",byte);
          
         if (count%4==0) {//每隔四位打印空格
             printf(" ");
         }
         
         count--;
     }
     printf("\n");
     
 }

 
int main ()
{
   char a = 0b101010;
   char b = 0b110011;
    printbinry(~a);
	printbinry(a&b);
	printbinry(a|b);
	printbinry(a^b);
	printbinry(a&(a^b));
   //printf("%d\n %d\n %d\n %d\n %d\n", ~a ,a&b ,a|b ,a^b ,a&(a^b) );
 
   return 0;
}