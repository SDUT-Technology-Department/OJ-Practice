/*
 Description
 解决图论问题，首先就要思考用什么样的方式存储图。但是小鑫却怎么也弄不明白如何存图才能有利于解决问题。你能帮他解决这个问题么？

 Input
  多组输入，到文件结尾。

 每一组第一行有两个数n、m表示n个点，m条有向边。接下来有m行，每行两个数u、v代表u到v有一条有向边。第m+2行有一个数q代表询问次数，接下来q行每行有一个询问，输入两个数为a，b。

 注意：点的编号为0~n-1，2<=n<=5000 ，n*(n-1)/2<=m<=n*(n-1)，0<=q<=1000000，a!=b，输入保证没有自环和重边

 Output
  对于每一条询问，输出一行。若a到b可以直接连通输出Yes，否则输出No。

 Sample
 Input
 2 1
 0 1
 2
 0 1
 1 0
 Output
 Yes
 No
 */
#include<iostream>
#include<cstring>

using namespace std;

bool ar[5001][5001];
int main()
{
    int m,n,u,v;

    while(scanf("%d %d",&n,&m)!=EOF)//!=EOF要快于～（按位取反）
    {
        memset(ar,0,sizeof (ar));//0要快于false

        while(m--)
        {
            scanf("%d %d",&u,&v);
            ar[u][v]= 1;
        }

        scanf("%d",&m);

        while(m--)
        {
            scanf("%d %d",&u,&v);
            if(ar[u][v]==1)
                printf("Yes\n");
            else
            {
                printf("No\n");
            }
        }
    }

    return 0;
}
