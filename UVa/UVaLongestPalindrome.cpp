///https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=16&page=show_problem&problem=2092
//#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int tbl[1005][1005];

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int T;
    scanf("%d",&T);
    getchar();

    char s[1005];

    while(T--)
    {
        gets(s);
        if(strlen(s)==0)
        {
            printf("0\n");
            continue;
        }

        int len = strlen(s), l=1;

        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len; j++)
                tbl[i][j] = 0;
            tbl[i][i] = 1;
        }

        for(l ; l<len; l++)
        {
            for(int i=0,j=l; j<len; i++,j++)
            {
                if(s[i]==s[j])
                {
                    tbl[i][j] = tbl[i+1][j-1]+2;
                }
                else
                {
                    tbl[i][j] = tbl[i+1][j] > tbl[i][j-1] ? tbl[i+1][j] : tbl[i][j-1];
                }
            }
        }

        printf("%d\n",tbl[0][len-1]);
    }
    return 0;
}

