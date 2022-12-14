/*
 
 Description

 小粉和哈士奇是好朋友，一天，哈士奇去找小粉玩，但小粉还没做完功课。粉妈妈说只有做完功课才能出门，这可急坏了小粉，于是小粉让哈士奇和他一块做功课。其中有一道题是这样的：

 给出一个正整数 n 和数字 m ( m 取值范围[0,9]中的一个数字)，求 m 在 n 中出现的次数。

 比如 n = 2122345 , m = 2，答案就是  3 ，因为 2 在 2122345 中出现了三次。

 哈士奇的数学不好，为了尽快做完功课，他找到了会编程的你，请你编写程序解决这个问题。
 Input

 输入只有一行，包含两个空格分开的整数 n 和 m 。（0 <= m <= 9，1 <= n <= 2147483647）
 Output

 输出一个数字，表示 m 在 n 中 出现的次数。
 Sample

 Input

 2122345 2
 Output

 3
 
 */
#include <stdio.h>
int main()
{
    int n, m, a, i;
    
    scanf("%d %d", &n, &m);
    
    if ((0 <= m && m <= 9)&&(1 <= n && n <= 214748364))
    {
        i = 0;
        while (n > 0)
        {
            a = n%10;
            n = n/10;
            
            if (a == m)
            {
                ++i;
            }
            else
                n = n;
        }
    }
    else
        return 0;
    
    printf("%d\n", i);
    
    return 0;
}
