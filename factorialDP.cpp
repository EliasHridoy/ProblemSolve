#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ffast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filoop(n) for(ll i=0;i<(n);i++)
#define fjloop(n) for(ll j=0;j<(n);j++)

ll dp[101];
int fact(int n);

int main()
{
    ffast;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);


    int t;
    //cin>>t;
    //while(t--)
    {
        int n;
        cin>>n;
        memset(dp,-1,sizeof(dp));
        cout<<fact(n);

    }

    return 0;
}

int fact(int n)
{
    //if(dp[n]!=-1) return dp[n];
    if(n<=2) return n;


     ll res = n*fact(n-1);
    dp[n] = res;
    return res;

}



