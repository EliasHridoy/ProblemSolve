///https://atcoder.jp/contests/abc154/tasks/abc154_c

#include<bits/stdc++.h>
using namespace std;

int a[200001];
int ans[200001] = {0};

int main()
{
    int t;

    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        long long x;
        scanf("%d",&a[i]);
    }
    sort(a, a+t);


    for(int i=0;i<t-1; i++)
    {
        if(a[i]==a[i+1])
        {printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}

