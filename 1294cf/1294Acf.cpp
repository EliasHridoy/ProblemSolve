///https://codeforces.com/contest/1294/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        scanf("%d%d%d%d",&a,&b,&c,&n);
        if((a+b+c+n)%3==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
