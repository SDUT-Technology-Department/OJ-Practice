/*
 Description

 Your task is to Calculate a + b.
 Input

 The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line.
 Output

 For each pair of input integers a and b you should output the sum of a and b, and followed by a blank line.
 Sample

 Input

 1 5
 10 20
 Output

 6

 30
 */
#include<stdio.h>
int main()
{
    int a,b;
    
    while(scanf("%d %d", &a,&b) !=EOF)
    {
        printf("%d",a+b);
        printf("\n");
        printf("\n");
    }
    
    return 0;
}
