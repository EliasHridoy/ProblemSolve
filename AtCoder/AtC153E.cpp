///https://atcoder.jp/contests/abc153/tasks/abc153_e
#include<bits/stdc++.h>
using namespace std;

#define MAX 1e16

int a[1001],b[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int h,n;
    cin>>h>>n;
    int i=0;
    while(n>i++)
    {
        cin>>a[i]>>b[i];
    }
    long long ans= MAX;
    while(i--)
    {
        long long x = (h+a[i])/a[i] * b[i];
        ans = min(ans,x);
    }
    for(i=0; i<n; i++)

    return 0;
}


