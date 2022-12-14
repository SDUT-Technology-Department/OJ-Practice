/*
 Description
 说到“敢死队”，大家不要以为我来介绍电影了，因为数据结构里真有这么道程序设计题目，原题如下：

  

 有M个敢死队员要炸掉敌人的一个碉堡，谁都不想去，排长决定用轮回数数的办法来决定哪个战士去执行任务。如果前一个战士没完成任务，则要再派一个战士上去。现给每个战士编一个号，大家围坐成一圈，随便从某一个战士开始计数，当数到5时，对应的战士就去执行任务，且此战士不再参加下一轮计数。如果此战士没完成任务，再从下一个战士开始数数，被数到第5时，此战士接着去执行任务。以此类推，直到任务完成为止。

  

 这题本来就叫“敢死队”。“谁都不想去”，就这一句我觉得这个问题也只能叫“不敢死队问题”。今天大家就要完成这道不敢死队问题。我们假设排长是1号，按照上面介绍，从1号开始数，数到5的那名战士去执行任务，那么排长是第几个去执行任务的？

 Input
 输入包括多组数据，每组一行，包含一个整数M（0<=M<=10000)（敢死队人数），若M==0，输入结束，不做处理。

 Output
 输出一个整数n，代表排长是第n个去执行任务。

 Sample
 Input
 9
 6
 223
 0
 Output
 2
 6
 132
 */
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
int main()
{
    int n,m;
    int i,t;
    int flag = 1;
    while(~scanf("%d",&n)&&n!=0)
    {
        m=5;
        flag = 1;
        struct Node *head = (struct Node *)malloc(sizeof(struct Node));
        struct Node *tail =head;
        struct Node *p,*die;
        tail->Next = NULL;

        for(i=1;i<n;i++)
        {
            p = (struct Node *)malloc(sizeof (struct Node));
            p->data = i+1;
            p->Next = NULL;
            tail->Next = p;
            tail = p;
        }

        head->data = 1;
        tail->Next = head;
        t=n;

        p=head;
        while (t>1)
        {
            for(i=0;i<m-2;i++)
            {
                p=p->Next;
            }
            die = p->Next;
            if(die->data == 1)
            {
                break;
            }
            p->Next=die->Next;
            free(die);
            flag++;
            t--;
            p=p->Next;
        }
        printf("%d\n",flag);
    }




    return 0;
}
