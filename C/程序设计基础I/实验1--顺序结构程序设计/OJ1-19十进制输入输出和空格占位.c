/*
 Description

 输入一个整数，请你按如下要求输出：

 第一行按原样输出，

 第二行按原样靠右输出，不足 8 位左补空格并在两端添加星号包裹，

 第三行按原样靠左输出，不足 8 位右补空格并在两端添加星号包裹。
 Input

 一个int范围内的正整数 a 。
 Output

 共三行，按题目描述输出。
 Sample

 Input

 123456
 Output

 123456
 *  123456*
 *123456  *
 
 */
#include<stdio.h>
int main()
{
    int a;
    
    scanf("%d", &a);
    
    printf("%d\n", a);
    printf("*%8d*\n", a);
    printf("*%-8d*\n", a);
    
    
    return 0;
}


