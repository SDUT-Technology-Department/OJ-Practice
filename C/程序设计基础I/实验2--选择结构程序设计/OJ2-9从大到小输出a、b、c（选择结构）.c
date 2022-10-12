/*
 Description
 从键盘输入三个整数a、b、c，要求将输出的数据按从大到小排序后输出。

 Input
 从键盘上输入三个整数a、b、c，每个整数之间用空格分开。

 Output
 从大到小顺序输出a、b、c的值。

 Sample
 Input
 4 3 5
 Output
 5 4 3
 */
#include <stdio.h>
int main ()
{
    int a, b, c, t;
    
    scanf("%d %d %d", &a, &b, &c);
    
   if ( a < b )
   {
       //交换ab的数值
       t = a;
       a = b;
       b = t;
   }
    if ( b < c )
    {
        //交换bc的数值
        t = b;
        b = c;
        c = t;
    }
    if (b > a)
    {
        //交换ac的数值
        t = b;
        b = a;
        a = t;
    }
    
    printf ("%d %d %d\n", a, b, c);
    
    
    return 0;
}
