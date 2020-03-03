///https://atcoder.jp/contests/abc153/tasks/abc153_c
#include<bits/stdc++.h>
using namespace std;
int h[200001];
long long sum=0;

int main()
{

    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++) scanf("%d",h+i);
    sort(h,h+n);
    for(int i=0; i<n-k; i++) sum+= h[i];
    printf("%lld\n",sum);

    return 0;
}

